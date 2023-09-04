#include <iostream>
using namespace std;

class ElectricBill {
private:
    double amountPaid;

public:
	    void setAmountPaid(double amount) {
        if (amount < 0) {
            amountPaid = 0;
        } else {
            amountPaid = amount;
        }
    }
    ElectricBill(double amount) {
        if (amount < 0) {
            amountPaid = 0;
        } else {
            amountPaid = amount;
        }
    }
    double getAmountPaid()  {
        cout<<amountPaid;
    }

    double getVAT()  {
        cout<<amountPaid * 0.18;
    }

    double getEWURA()  {
        cout<<amountPaid * 0.01;
    }

    double getREA()  {
        cout<<amountPaid * 0.03;
    }

    double getUnits()  {
        double pricePerKWh = 295; 
        double Deductions = getVAT() + getEWURA() + getREA() + 5000;
        double remainingAmount = amountPaid - Deductions;
        cout<<remainingAmount / pricePerKWh;
    }
};

int main() {
   
    ElectricBill bill(20000);
    cout << "Amount paid: " << bill.getAmountPaid() << endl;
    cout << "VAT: " << bill.getVAT() <<endl;
    cout << "EWURA: " << bill.getEWURA() <<endl;
    cout << "REA: " << bill.getREA() <<endl;
    cout << "Units purchased: " << bill.getUnits() <<endl;


    return 0;
}
