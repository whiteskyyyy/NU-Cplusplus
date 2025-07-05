#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

//variables//
float base, height, area, peri;

int main()
{
	
	//inpute base//
	cout<<"Enter Base: "; 
	cin>>base;
	//inpute height//
	cout<<"Enter Height: "; 
	cin>>height;
		//formula for area and peri//
		area=height*base/2;
		peri=height+base+sqrt(pow(height,2)+pow(base,2));
	//print area//
	cout<<"\nArea = "<<area;
	//print peri//
	cout<<"\nPerimeter = "<<peri;
	
	getch();
	
	return 0;
	
}