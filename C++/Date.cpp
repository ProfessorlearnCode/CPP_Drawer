/*(Date Class) Create a class called Date that includes three pieces of information as data members—
a month (type int), a day (type int) and a year (type int). Your class should have a constructor with
three parameters that uses the parameters to initialize the three data members. For the purpose of
this exercise, assume that the values provided for the year and day are correct, but ensure that the
month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get function for
each data member. Provide a member function displayDate that displays the month, day and year
separated by forward slashes (/). Write a test program that demonstrates class Date’s capabilities.*/

#include<iostream>
using namespace std;

class date
{
	private:
		int month;
		int day;
		int year;
	public:
		date(int mon,int d,int y);
		void setmonth (int mon);
		int getmonth() ;
		void setday (int d);
		int getday() ;
		void setyear (int y);
		int getyear() ;
		void displaydate() ;
};
	date::date(int mon,int d,int y)
	:month{mon}, day{d}, year{y}
	{
	if(mon<1 || mon>12)
	{
		month=1;
	}
	}
	void date::setmonth(int mon)
	{
		if(mon>=1 && mon<=12)
		{
			month=mon;	
		}	
	}
	int date::getmonth() 
	{
		cout<<month;
	}
	void date::setday(int d)
	{
		day=d;
	}
	int date::getday() 
	{
		cout<<day;
	}
	void date::setyear(int y)
	{
		year=y;
	}
	int date::getyear() 
	{
		cout<<year;
	}
	void date::displaydate()
	{
		cout<<"Date ="<<month<<"/"<<day<<"/"<<year<<std::endl;
	}
	int main()
	{
		date d(4,23,2022);
		d.displaydate();
		d.getday();
		d.setmonth(10);
		d.getday();
		d.setmonth(8);
		d.displaydate();
		
	return 0;
	}
