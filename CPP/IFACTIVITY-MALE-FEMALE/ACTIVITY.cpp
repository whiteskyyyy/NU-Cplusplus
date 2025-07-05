#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;


int main()
{
	char name[20];
	int MF;
	
	cout<<"Enter your name: ";
	cin>>name;
	
	cout<<"Enter 1 if male and 0 if Female: ";
	cin>>MF;
	
	if (MF==1)
	{
		cout<<"YOU ARE MALE, " <<name;
	}
	
	else
	{
 	cout<<"YOU ARE FEMALE, " <<name<<".";
 	}
 	
 		
	getch();
	
	
}