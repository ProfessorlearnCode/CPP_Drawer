#include<iostream>
using namespace std;

int main()
{
    int Farzam[5];
    cout<<"Enter #s in array"<<endl;
    cout<<"Enter [0]= ";
    cin>>Farzam[0];
    cout<<"Enter [1]= ";
    cin>>Farzam[1];
    cout<<"Enter [2]= ";
    cin>>Farzam[2];
    cout<<"Enter [3]= ";
    cin>>Farzam[3];
    cout<<"Enter [4]= ";
    cin>>Farzam[4];

    for(int i=0; i<=4; i++)
    {
        cout<<"The position of pointer"<< i<< "is ="<<Farzam[i]<<endl;
        cout<<"That's all"<<endl;
    }
    return 0;
}