#include <iostream>
using namespace std;

// Define the structure

struct point 
{
    int x;
    int y;
};


int main()
{
    // Declare three variables of type struct point
    
    struct point p1, p2, p3;

    // Prompt the user to enter coordinates for p1
    
    cout<<"Enter coordinates for p1 (x axis): ";
    cin>>p1.x;
    cout<<"Enter coordinates for p1 (y axis): ";
	cin>>p1.y;
	cout<<"\n\tCoordinates of p1 are ("<<p1.x<<","<<p1.y<<")";
	
    // Prompt the user to enter coordinates for p2
    
    cout<<"Enter coordinates for p2 (x axis): ";
    cin>>p2.x;
    cout<<"Enter coordinates for p2 (y axis): ";
	cin>>p2.y;
	
	
    // Calculate the sum of p1 and p2
    
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    // Display the coordinates of the new point
    
    cout<<"Coordinates of p1 + p2 are: "<<"("<<p3.x<<","<<p3.y<<")";

    return 0;
}
