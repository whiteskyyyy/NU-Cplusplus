//MARTIN, SETH MARCUS//
//COE211//

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//VARIABLES//
char name[100];
float q,e,a;


int main()
{ 
	
	//GET INPUT//
	cout<<"Enter Your Name: "; cin.getline(name,100);
    cout<<"Enter Your Quiz Score: "; cin>>q;
    cout<<"Enter Your Exam Score: "; cin>>e;
    
    
    //FORMULA FOR AVERAGE//
    a=(q + e)/2;
	
	cout<<"Average = "<<a;
	
	//IF CONDITIONS//
	if(a>=96 && a<=100)
	{
		cout<<"\nCONGRATULATIONS!";
        cout<<"\nYOUR NPG IS 4.0";
	
	}
	
	else if (a>=91 && a<=95)
	{
		cout<<"\nCONGRATULATIONS!";
        cout<<"\nYOUR NPG IS 3.5";

	}
	else if (a>=87 && a<=90)
	{
		cout<<"\nCONGRATULATIONS!";
        cout<<"\nYOUR NPG IS 3.0";
	
	}
	else if (a>=84 && a<=86)
	{
		cout<<"\nCONGRATULATIONS!";
        cout<<"\nYOUR NPG IS 2.5";

	}
	else if (a>=81 && a<=83)
	{
		cout<<"\nCONGRATULATIONS!";
        cout<<"\nYOUR NPG IS 2.0";
	}
	else if (a>=78 && a<=80)
	{
		cout<<"\nCONGRATULATIONS!";
        cout<<"\nYOUR NPG IS 1.5";

	}
	else if (a>=75 && a<=77)
	{
		cout<<"\nCONGRATULATIONS!";
        cout<<"\nYOUR NPG IS 1.0";
	}
	
	else
	{
		cout<<"\nINVALID CREDENTIALS";
        cout<<"\nYOUR NPG IS = R";
	}
	
	return 0;
	}