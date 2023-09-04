#include<iostream>
using namespace std;

class Operation{
	private:
		
		double operand1;
		double operand2;
		double result;
		char operationtype;
		
	public:
		void calculate(){
			cout<<"The character for the operation \n+ = sum  \n- =Subtract \n* =Multiply \n/ =Division";
			cout<<"\n\nEnter a character= ";
			cin>>operationtype;
			
			cout<<"Enter the 1st value= ";
			cin>>operand1;
			cout<<"Enter the 2nd value= ";
			cin>>operand2;
			
			switch (operationtype){
				case '+':
					result=operand1+operand2;
					break;
				case '-':
					result=operand1+operand2;
					break;
				case '/':
					if(operand2<0){
						cout<<"Maths Error";
					}else{
					result=operand1/operand2;
					}
					break;
				case '*':
					result=operand1*operand2;
					break;
				default:
					cout<<"Invalid operator used";	
				
			}
		}
		void out(){
			cout<<"---------------------------"<<endl;
			cout<<"\n\tThe result will be= "<<result;
		}
};

int main(){
	Operation o1;
	o1.calculate();
	o1.out();
	return 0;
}
