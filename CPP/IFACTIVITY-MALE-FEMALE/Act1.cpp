//MARTIN, SETH MARCUS//
//COE211//

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//VARIABLES//
float base,height,erya,p;


int main()
{ 


//Ask for input base & height//
cout<<"     Enter Base: "; 
cin>>base;
cout<<"     Enter Height: "; 
cin>>height;


//if else statement//
//add conditions//
if(base>=height)
{
	erya=base*height/2;
	cout<<"     Area of Triangle = "<<erya;
}
else
{
	p=(base*2)+(height*2);
	cout<<"     Perimeter = "<<p;
	
}



	return 0;
}