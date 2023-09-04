#include <iostream>
using namespace std;

class Package {
protected:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZIP;
    string recipientName;
    string recipientAddress;
    string recipientCity;
    string recipientState;
    string recipientZIP;
    double weight;
    double costPerOunce;

public:
    Package(string senderName, string senderAddress, string senderCity,
            string senderState, string senderZIP, string recipientName,
            string recipientAddress, string recipientCity, string recipientState,
            string recipientZIP, double weight, double costPerOunce)
        : senderName(senderName), senderAddress(senderAddress), senderCity(senderCity),
          senderState(senderState), senderZIP(senderZIP), recipientName(recipientName),
          recipientAddress(recipientAddress), recipientCity(recipientCity), recipientState(recipientState),
          recipientZIP(recipientZIP), weight(max(weight, 0.0)), costPerOunce(max(costPerOunce, 0.0)) {
    }

    double calculateCost() {
        return weight * costPerOunce;
    }
};

class TwoDayPackage : public Package {
private:
    double flatFee;

public:
    TwoDayPackage(string senderName, string senderAddress, string senderCity,
                  string senderState, string senderZIP, string recipientName,
                  string recipientAddress, string recipientCity, string recipientState,
                  string recipientZIP, double weight, double costPerOunce, double flatFee)
        : Package(senderName, senderAddress, senderCity, senderState, senderZIP, recipientName,
                  recipientAddress, recipientCity, recipientState, recipientZIP, weight, costPerOunce),
          flatFee(max(flatFee, 0.0)) {
    }

    double calculateCost() {
        return Package::calculateCost() + flatFee;
    }
};

class OvernightPackage : public Package {
private:
    double additionalFeePerOunce;

public:
    OvernightPackage(string senderName, string senderAddress, string senderCity,
                     string senderState, string senderZIP, string recipientName,
                     string recipientAddress, string recipientCity, string recipientState,
                     string recipientZIP, double weight, double costPerOunce, double additionalFeePerOunce)
        : Package(senderName, senderAddress, senderCity, senderState, senderZIP, recipientName,
                  recipientAddress, recipientCity, recipientState, recipientZIP, weight, costPerOunce),
          additionalFeePerOunce(max(additionalFeePerOunce, 0.0)) {
    }

    double calculateCost() {
        return weight * (costPerOunce + additionalFeePerOunce);
    }
};

int main() {
    TwoDayPackage twoDayPackage("John Smith", "123 Main St", "City", "State", "12345",
                                "Jane Doe", "456 Elm St", "City", "State", "67890",
                                10, 0.5, 5);
    cout << "Two-Day Package Cost: $" << twoDayPackage.calculateCost() << endl;

    OvernightPackage overnightPackage("John Smith", "123 Main St", "City", "State", "12345",
                                      "Jane Doe", "456 Elm St", "City", "State", "67890",
                                      10, 0.5, 2);
    cout << "Overnight Package Cost: $" << overnightPackage.calculateCost() << endl;

    return 0;
}
