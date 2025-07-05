//MARTIN, SETH MARCUS//
//COE211//

#include <iostream>
#include<conio.h>

using namespace std;

//VARIABLES//
float num1,num2,num3;

int main(){
	
	//Ask for input//
	cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
	cin>>num2;
	cout<<"Enter Third Number: ";
	cin>>num3;

	//IF CONDITIONS//
    if(num1>num2 && num1>num3)
    {	
    	cout << "Largest number is "<<num1;
	}

	else if(num2>num1 && num2>num3)
	{
	    cout << "Largest number is "<<num2;	
	}

	else if(num3>num1 && num3>num2)
	{
		cout << "Largest number is "<<num3;
	}
	
	return 0;
}