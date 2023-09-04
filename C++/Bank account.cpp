#include<iostream>
using namespace std;

class bankaccount{
	private:
		int accountno;
		string customername;
		double balance;
		double dep;
		double with;
	
	public:
		void accinfo(){
			cout<<"Enter your Account number (in digits) = ";
			cin>>accountno;
			cout<<"Enter your Your name = ";
			cin>>customername;
			//cout<<"Enter your Balance= ";
			//cin>>balance;
		}
		int deposit(){
			cout<<"Please Enter the amount to be deposited (Enter 1000)= "<<"$";
			cin>>dep;
		}
		int withdraw(){
			cout<<"Please Enter the amount to be withdrawed (Enter 500)= "<<"$";
			cin>>with;
		}
		int out(){
			cout<<"-------------------------------------------------------";
			cout<<"\n\tThe account holder is = "<<customername;
			cout<<"\n\tThe account number is = "<<accountno;
			balance=dep-with;
			cout<<"\n\tThe remaining balance is = "<<"$"<<balance;
		}
	
};

int main(){
	bankaccount b1;
	b1.accinfo();
	b1.deposit();
	b1.withdraw();
	b1.out();	
	return 0;
}
