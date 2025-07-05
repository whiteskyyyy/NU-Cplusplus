//SETH MARCUS MARTIN//
//COE211//

#include <iostream>
#include <conio.h>

using namespace std;

//VARIABLES//
int da1;


int main()
{
	//ask for a number//
	cout<<"Enter any number: ";
	cin>>da1;
	
	//if conditions//
	if(da1>0)
	{
		
	cout<<da1<<" is a positive number";
	
	}
	else if (da1<0)
	{
		
    cout<<da1<<" is a Negative number";
    
	}
	else
	{
		
    cout<<"You entered Zero";
    
	}
	
	cout<<"\n Thank you, come again!";
	
	return 0;
}