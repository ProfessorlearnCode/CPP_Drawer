#include<iostream>
using namespace std;

int function(int n1, int n2){
    return n1+n2;
}

int main (){
    int a,b;
    cin>>a>>b;
    cout<<function(a,b);
    return 0;
}