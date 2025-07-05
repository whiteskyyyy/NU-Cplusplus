#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;


int main()
{
	char sheesh[30];
	int MF;
	
	cout<<"Enter your name: ";
	cin>>sheesh;
	
	cout<<"\nEnter 1 if male and 0 if Female: ";
	cin>>MF;
	
	if (MF==1)
	{
		cout<<"\nYOU ARE MALE, ";
		cout<<sheesh<<".";
	}
	
	else
	{
 		cout<<"\nYOU ARE FEMALE, ";
		cout<<sheesh<<".";
 	}
 	
 		
	getch();
	
	
}