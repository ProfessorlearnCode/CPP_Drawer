#include<iostream>
using namespace std;
int main()
{
cout<<"Enter your Name :"<<endl<<"Enter your Roll.no ="<<endl;
string name;
int roll;
cin>>name>>roll;
float eng;
cout<<"Enter you marks of English =  ";
cin>>eng;
cout<<"("<<eng<<")"<<"/"<<"100"<<endl;
float phy;
cout<<"Enter you marks of physics =  ";
cin>>phy;
cout<<"("<<phy<<")"<<"/"<<"85"<<endl;
float comp;
cout<<"Enter you marks of Computer =  ";
cin>>comp;
cout<<"("<<comp<<")"<<"/"<<"85"<<endl;
float math;
cout<<"Enter you marks of Mathematics =  ";
cin>>math;
cout<<"("<<math<<")"<<"/"<<"90"<<endl;
float urdu;
cout<<"Enter you marks of Urdu =  ";
cin>>urdu;
cout<<"("<<urdu<<")"<<"/"<<"69"<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"your percentage in English is ="<<(eng/100)*100<<"%"<<endl;
cout<<"your percentage in Physics is ="<<(phy/85)*100<<"%"<<endl;
cout<<"your percentage in Computer is ="<<(comp/85)*100<<"%"<<endl;
cout<<"your percentage in Mathematics is ="<<(math/100)*100<<"%"<<endl;
cout<<"your percentage in Urdu is ="<<(urdu/100)*100<<"%"<<endl;
cout<<"----------------------------------------"<<endl;
if(eng>=80 && eng<=100)
{
    cout<<"You Got A+ Grade"<<endl;
}
else if(eng>=70 && eng<80)
{
    cout<<"You Got A- Grade"<<endl;
}
else if(eng>=60 && eng<70)
{
    cout<<"You Got B+ Grade"<<endl;
}
else if(eng>=50 && eng<60)
{
    cout<<"You Got B- Grade"<<endl;
}
else
{
    cout<<"You Got F Grade"<<endl;
}

if(phy>=80 && phy<=100)
{
    cout<<"You Got A+ Grade"<<endl;
}
else if(phy>=70 && phy<80)
{
    cout<<"You Got A- Grade"<<endl;
}
else if(phy>=60 && phy<70)
{
    cout<<"You Got B+ Grade"<<endl;
}
else if(phy>=50 && phy<60)
{
    cout<<"You Got B- Grade"<<endl;
}
else
{
    cout<<"You Got F Grade"<<endl;
}
if(comp>=80 && comp<=100)
{
    cout<<"You Got A+ Grade"<<endl;
}
else if(comp>=70 && comp<80)
{
    cout<<"You Got A- Grade"<<endl;
}
else if(comp>=60 && comp<70)
{
    cout<<"You Got B+ Grade"<<endl;
}
else if(comp>=50 && comp<60)
{
    cout<<"You Got B- Grade"<<endl;
}
else
{
    cout<<"You Got F Grade"<<endl;
}
if(urdu>=80 && urdu<=100)
{
    cout<<"You Got A+ Grade"<<endl;
}
else if(urdu>=70 && urdu<80)
{
    cout<<"You Got A- Grade"<<endl;
}
else if(urdu>=60 && urdu<70)
{
    cout<<"You Got B+ Grade"<<endl;
}
else if(urdu>=50 && urdu<60)
{
    cout<<"You Got B- Grade"<<endl;
}
else
{
    cout<<"You Got F Grade"<<endl;
}
if(math>=80 && math<=100)
{
    cout<<"You Got A+ Grade"<<endl;
}
else if(math>=70 && math<80)
{
    cout<<"You Got A- Grade"<<endl;
}
else if(math>=60 && math<70)
{
    cout<<"You Got B+ Grade"<<endl;
}
else if(math>=50 && math<60)
{
    cout<<"You Got B- Grade"<<endl;
}
else
{
    cout<<"You Got F Grade"<<endl;
}
cout<<"-------------------------------------------"<<endl;



    return 0;
} 
