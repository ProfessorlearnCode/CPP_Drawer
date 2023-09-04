#include<iostream>
using namespace std;

// int add(int a, int b)           //formal Parameters 
// {
//     return a + b;
// }

// // Function to add two floats
// float add(float a, float b) {
//     return a + b;
// }

// int main() {
//     int intNum1, intNum2;                           //initializing actual parameters
//     cin>>intNum1>>intNum2;
//     float floatNum1, floatNum2;                     //initializing actual parameters
//     cin>>floatNum1>>floatNum2;

//     // Calling the overloaded add function with integers

//     int intResult = add(intNum1, intNum2);          //Using Actual Parameters for the Functions to be used in main()
//     cout << "Addition of " << intNum1 << " and " << intNum2 << " is: " << intResult <<endl;

//     // Calling the overloaded add function with floats

//     float floatResult = add(floatNum1, floatNum2);  //Using Actual Parameters for the Functions to be used in main()
//     cout << "Addition of " << floatNum1 << " and " << floatNum2 << " is: " << floatResult <<endl;
//     return 0;

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Shape {
public:
                                                                    //Using "Virtual" keyword --> The function will be overriden later
    virtual void draw()         
    {           
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
                                                                     //Using "Override" keyword --> The working of Virtual Function is overriden
    void draw()     
    {      
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    system("cls");
    // Shape shape;
    Circle circle;
    // shape.draw();   // Output: "Drawing a shape."
    //circle.draw();  // Output: "Drawing a circle."
    Shape* ptr;
    Circle II;
    ptr = &II;
    ptr->draw();

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// class MyClass {
// private:
//     int privateData;

// public:
//     friend void friendFunction(MyClass obj);
// };

// void friendFunction(MyClass obj) {
//     obj.privateData;                           // Accessing private member
//     cout<<"Enter Number"<<endl;
//     cin>>obj.privateData;
//     cout<<"The No you entered is "<<obj.privateData<<endl;
// }

// int main() {
//     MyClass o;
//     friendFunction(o);
    
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// class Vehicle {
// private:
//     int capacity, fuel_amount;

// public:
//     Vehicle() {
//         capacity = 0;
//         fuel_amount = 0;
//     }

//     void input_capacity() {
//         cout << "Enter Passenger Capacity: ";
//         cin >> capacity;
//     }

//     void input_fuel() {
//         cout << "Enter Fuel Capacity: ";
//         cin >> fuel_amount;
//     }

//     void output_capacity() {
//         cout << "The Passenger Capacity is " << capacity << endl;
//     }

//     void output_fuel() {
//         cout << "The Fuel Amount is " << fuel_amount << endl;
//     }
// };

// class Bus : public Vehicle {
// public:
//     using Vehicle::input_capacity;
//     using Vehicle::input_fuel;
//     using Vehicle::output_capacity;
//     using Vehicle::output_fuel;
// };

// int main() {
//     Bus bus;
//     cout << "For Bus:" << endl;
//     bus.input_capacity();
//     bus.input_fuel();
//     bus.output_capacity();
//     bus.output_fuel();

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// class A
// {
// 	private:
// 		int a;
// 		public:
// 			void in()
// 			{
// 				cout<<"please enter the value of A: ";
// 				cin>>a;
// 			}
// 			void out()
// 			{
// 					cout<<"\nyou entered the value of A: "<<a;
// 			}
	
// };
// class B
// {
// 	int b;
// 		public:
// 			void input()
// 			{
// 				cout<<"please enter the value of B: ";
// 				cin>>b;
// 			}
// 			void output()
// 			{
// 					cout<<"\nyou entered the value of B: "<<b;
// 			}
	
// };
// class C:public A, public B
// {
// 	private:
// 		int c;
// 		public:
// 			void get()
// 			{
// 				A::in();
// 				B::input();
// 				cout<<"please enter the value of C: ";
// 				cin>>c;
// 			}
// 			void show()
// 			{
// 				A::out();
// 				B::output();
// 				cout<<"\nyou entered the value of C: "<<c;
// 			}
	
// };
// int main()
// {
// 	C obj1;
// 	obj1.get();
// 	obj1.show();
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// void add(int a, int b);
// void add(float a, float b);

// void add(int a , int b){
//     cout<<a+b<<endl;
// }
// void add(float a, float b){
//     cout<<a+b<<endl;
// }
// int main(){
//     system("cls");
//     int i1,i2;
//     cout<<"For int addition"<<endl;
//     cout<<"Input I1: ";
//     cin>>i1;
//     cout<<"Input I2: ";    
//     cin>>i2;
//     add(i1,i2);
//     float f1,f2;
//     cout<<"For Float addition"<<endl;
//     cout<<"Input F1: ";
//     cin>>f1;
//     cout<<"Input F2: ";    
//     cin>>f2;
//     add(f1,f2);
//     return 0;    
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// class demo {
// private:
//     int n;

// public:
//     demo(int num) {
//         n = num;
//     }

//     void operator++(int) {
//         n++;
//     }
//     void operator++() {
//         ++n;
//     }    
// };

// int main() {
//     system("cls");
//     int Num;
//     cout << "Enter a number: ";
//     cin >> Num;

//     demo d(Num);
//     d++;
//     ++d;

//     return 0;
// }
