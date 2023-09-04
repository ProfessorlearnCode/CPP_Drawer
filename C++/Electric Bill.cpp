
#include <iostream>
using namespace std;

class ElectricBill {
private:
    double amountPaid;

public:
    // Constructor
    ElectricBill(double amount) {
        if (amount < 0) {
            amountPaid = 0;
        } else {
            amountPaid = amount;
        }
    }

    // Getter and Setter for amountPaid
    double getAmountPaid() const {
        return amountPaid;
    }

    void setAmountPaid(double amount) {
        if (amount < 0) {
            amountPaid = 0;
        } else {
            amountPaid = amount;
        }
    }

    // Method to calculate VAT deduction
    double getVAT() const {
        return amountPaid * 0.18;
    }

    // Method to calculate EWURA deduction
    double getEWURA() const {
        return amountPaid * 0.01;
    }

    // Method to calculate REA deduction
    double getREA() const {
        return amountPaid * 0.03;
    }

    // Method to calculate the number of kilowatt hours purchased
    double getUnits() const {
        double remainingAmount = amountPaid - (getVAT() + getEWURA() + getREA() + 5000);
        return remainingAmount / 295; // Assuming one kilowatt hour is sold at 295 Tanzanian Shillings
    }
};

int main() {
    // Example usage
    ElectricBill bill(10000); // Creating an instance of ElectricBill with 10000 Tanzanian Shillings paid

    std::cout << "Amount Paid: " << bill.getAmountPaid() << std::endl;
    std::cout << "VAT Deduction: " << bill.getVAT() << std::endl;
    std::cout << "EWURA Deduction: " << bill.getEWURA() << std::endl;
    std::cout << "REA Deduction: " << bill.getREA() << std::endl;
    std::cout << "Units Purchased: " << bill.getUnits() << std::endl;

    return 0;
}
