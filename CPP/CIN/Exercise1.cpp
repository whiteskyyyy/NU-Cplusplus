#include<iostream>
#include<conio.h>

using namespace std;

//variables//
float rad, area, circ;

int main()
{
	
	//Ask for Radius//
	cout<<"Enter Radius: "; 
	//input Radius//
	cin>>rad;
		//formula for area and circ//
		area=3.1416*rad*rad;
		circ=2*3.1416*rad;
	//print area//
	cout<<"\nArea = "<<area;
	
	//print Circ//
	cout<<"\nCircumference = "<<circ;
	
	getch();
	
	return 0;
	
}
