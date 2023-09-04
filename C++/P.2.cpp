#include <iostream>
using namespace std;

struct phone  								   // Define the structure
{
    int area_code;
    int exchange;
    int number;
};

int main() 
{
    // Declare two variables of type struct phone
    
    struct phone mynum = {212, 767, 8900};    // Initialize with a predefined number
    struct phone yournum;  					  // User input number

    // Prompt the user to enter area code, exchange, and number for yournum
    
    cout<<"Enter your Phone number like (212) 757 8900"<<endl;
    cout<<"\nEnter the Area Code= ";
    cin>>yournum.area_code;
    cout<<"Enter the Exchange= ";
    cin>>yournum.exchange;
    cout<<"Enter Number= ";
    cin>>yournum.number;

    // Display mynum and yournum
    
    cout<<"My Number is "<<"("<<mynum.area_code<<")"<<mynum.exchange<<mynum.number<<endl;
    cout<<"My Number is "<<"("<<yournum.area_code<<")"<<yournum.exchange<<yournum.number<<endl;

    return 0;
}
