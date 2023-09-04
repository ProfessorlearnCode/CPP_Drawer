#include <iostream>
using namespace std;

class Account {
protected:
    double Balance=100000;
    double AccountBalance;

public:
    Account() {
        P:

        // cout << "Your Balance = ";
        // cin >> Balance;
        if (Balance >= 0.0)
            cout << "Processing complete" << endl;
        else {
            cout << "Initial balance is invalid. Enter again: " << endl;
            goto P;
        }
    }

    void Credit() {
        double amountdeposit;
    L:
        cout << "Enter amount to deposit: ";
        cin >> amountdeposit;
        if (amountdeposit >= 0) {
            Balance += amountdeposit;
            cout << "Your Credit is: " << Balance << endl;
            cout << "Processing complete" << endl;
        } else {
            cout << "Amount to be deposited is invalid. Enter again: " << endl;
            goto L;
        }
    }

    void Debit() {
        double amountwithdraw;
    L:
        cout << "Enter amount to withdraw: ";
        cin >> amountwithdraw;
        if (amountwithdraw <= Balance) {
            Balance -= amountwithdraw;
            cout << "Your Debit is: " << Balance << endl;
            cout << "Processing complete" << endl;
        } else {
            cout << "Debit amount exceeded account balance." << endl;
            goto L;
        }
    }
};

class SavingsAccount : public Account {
private:
    double interest_gained;
    double interest_rate;

public:
    SavingsAccount() {
        cout<<"Calculation in Savings Account"<<endl;
    }

    void calculateInterest() {
        cout << "Annual Interest Rate (Percentage): ";
        cin >> interest_rate;
        interest_gained = interest_rate * Balance;
        cout << "The total interest earned Annually: " << interest_gained << endl;
    }
};

class CheckingAccountInfo : public Account {
private:
    double transactionfee;
    double deducted_fee;

public:
    int Accountinfo(){
        cout<<"Your amount present in Bank account is "<< Balance<<endl;
        cout<<"Processing";
    }
    CheckingAccountInfo() {
        cout << "Enter Transaction fee: ";
        cin >> transactionfee;
        if (transactionfee >= 0){
            cout<<"Accepted request"<<endl;
        }
        else{
            cout<<"Invalid Transaction fee"<<endl;
        }
    }

    double calculateTransfee(){
        double remaining_Balance;
        remaining_Balance = Balance - transactionfee;
        cout << "The Balance after Transaction fee is " << remaining_Balance << endl;
        return remaining_Balance;
    }
};

int main() {
    int choice;
    int saving_choice;
    string name;
    cout << "Welcome to Bank System" << endl;
    cout << "Enter Your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
    cout << "1. Saving Account" << endl;
    cout << "2. Checking Account information" << endl << endl;
    cin >> choice;
    
    switch (choice) {
        case 1: {
            SavingsAccount S;
            cout<<"What do you want to calculate: \n 1. Debit \n 2. Credit \n 3.Calculate intrest"<<endl;
            cout<<"-------------------------------\n";
            cout<<"Insert a number: ";
            cin>>saving_choice;
            if (saving_choice==1)
            {    
                S.Debit();
            }
            else if (saving_choice==2)
            {
                S.Credit();
            }
            else if (saving_choice==3)
            {
                S.calculateInterest();
            }
            else
            {
                cout<<"Your value is invalid"<<endl;
            }
            break;
        }
        case 2: {
            CheckingAccountInfo C;
            cout<<"What do you want to calculate: \n 1. Debit \n 2. Credit \n 3.Transaction";
            cout<<"-------------------------------\n";
            cout<<"Insert a number: ";
            cin>>saving_choice;
            if (saving_choice==1)
            {    
                C.Debit();
            }
            else if (saving_choice==2)
            {
                C.Credit();
            }
            else if (saving_choice==3)
            {
            double remainingBalance = C.calculateTransfee();
            }
            else
            {
                cout<<"Your value is invalid"<<endl;
            }
            
            break;
        }
        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
