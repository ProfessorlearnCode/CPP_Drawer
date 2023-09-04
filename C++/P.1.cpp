#include <iostream>
using namespace std;


struct time   //initializing the variables and structure
{
    int hr;
    int min;
    int sec;
};


int main() 
{
   
    struct time t1;   // Declare a variable of type struct time

   
    cout<<"Enter Hours= ";   // The user is to enter hours values
    cin>>t1.hr;

    cout<<"Enter Minutes= "; // The user is to enter Minutes values
    cin>>t1.min;

    cout<<"Enter Seconds= "; // The user is to enter Seconds values
    cin>>t1.sec;

   
    long totalsecs = t1.hr * 3600 + t1.min * 60 + t1.sec;   // Calculate the total number of seconds

    
    cout<<"The total seconds will be "<<totalsecs<<" secs";  //Print the total number of seconds
    
    return 0;
}
    
