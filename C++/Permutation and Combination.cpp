#include<iostream>
using namespace std;
int main()
{
	int n;     //factotial of n
	cout<<"\tEnter the Value of 'N'"<<endl;
	cin>>n;
	int factorialofn=1;
	for(int i=1;i<=n;i++)
	{
		factorialofn*=i;
	}
	cout<<"Factorial of "<<n<<" = "<<factorialofn<<endl;

	
	
	int r;    //factorial of r
	cout<<"\n\n\tEnter the Value of 'R'"<<endl;
	cin>>r;
	int factorialofr=1;
	for(int j=1;j<=r;j++)
	{
		factorialofr*=j;
	}
	cout<<"Factorial of "<<r<<" = "<<factorialofr<<endl;
	


	int sub,factorialofsub=1;   //Factorial of n-r
	sub= n-r;
	for(int k=1;k<=sub;k++)
	{
		factorialofsub*=k;
	}
	cout<<"Factorial of "<<sub<<" = "<<factorialofsub<<endl;
	
	
	int permutation;   //Permutation
	permutation = factorialofn/factorialofsub;
	cout<<"\n\n\tPermutation is = "<<permutation;
	
	
	int combination;   //Combination
	combination= factorialofn/factorialofsub*factorialofr;
	cout<<"\n\n\tCombination is = "<<combination;
	
	return 0;
}

