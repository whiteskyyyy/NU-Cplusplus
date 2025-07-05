#include<iostream>
#include<conio.h>

using namespace std;

//variables//
char name[30];
float day, month, year;


int main()
{
	
	//Inpute Name//
	cout<<"Name: "; 
	cin>>name;
	
	//Input age//
	cout<<"Enter Age: "; 
	cin>>year;
	
	//formula for month and day//
	month=year*12;
	day=year*365;
	
	//print month and day//
	cout<<"\nin Months, your age is  "<<month<<" months old.";	
	cout<<"\nin Days, your age is "<<day<<" days old.";
	
	
	getch();
	return 0;
}
