/*(Invoice class) Create a class called Invoice that a hardware store might use to represent an invoice
for an item sold at the store. An Invoice should include six data members-a part number (type
string), a part description (type string), a quantity of the item being purchased (type int), a price
per item (type int) a value-added tax (VAT) rate as a decimal (type double) and a discount rate as
a decimal(type double). Your class should have a constructor that initializes the six data members.
The constructor should initialize the first four data members with values from parameters and the
last two data members to default values of 0.20 per cent and zero respectively. Provide a set and a
get functions for each data member. In addition, provide a member function named
getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per
item and applies the tax and discount amounts), then returns the amount. Have the set data
members perform validity checks on their parameters—if a parameter value is not positive, it
should be left unchanged. Write a driver program to demonstrate Invoice’s capabilities.*/


#include <iostream>
#include <string>

using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    int pricePerItem;
    double VATRate;
    double discountRate;

public:
    Invoice(string pn, string pd, int qty, int ppi)
	 : partNumber(pn), partDescription(pd), quantity(qty), pricePerItem(ppi), VATRate(0.20), discountRate(0) {}
    string getPartNumber(){ 
	 cout<<partNumber<<endl; 
	}
    string getPartDescription(){
	 cout<<partDescription<<endl;
	}
    int getQuantity(){
	 cout<<quantity<<endl; 
	}
    int getPricePerItem(){
	 cout<<pricePerItem<<endl; 
	}
    double getVATRate(){
	 cout<<VATRate<<endl; 
	}
    double getDiscountRate(){
	 cout<<discountRate<<endl; 
	}

    void setPartNumber(string pn) 
	{
	 partNumber = pn; 
	}
    void setPartDescription(string pd) {
	 partDescription = pd; 
	}
    void setQuantity(int qty) {
	 if (qty > 0) quantity = qty; 
	}
    void setPricePerItem(int ppi) {
	 if (ppi > 0) pricePerItem = ppi;
	}
    void setVATRate(double rate) {
	VATRate = rate; 
	}
    void setDiscountRate(double rate) {
	 discountRate = rate; 
	}

    double getInvoiceAmount(){
        cout<<quantity * pricePerItem * (1 + VATRate) * (1 - discountRate)<<endl;
    }
};

int main() {
    Invoice invoice("ABC123", "Hammer", 5, 100);
    cout << "Part number: " << invoice.getPartNumber() << endl;
    cout << "Part description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per item: " << invoice.getPricePerItem() << endl;
    cout << "VAT rate: " << invoice.getVATRate() << endl;
    cout << "Discount rate: " << invoice.getDiscountRate() << endl;

    cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;

    return 0;
}

