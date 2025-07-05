#include<iostream>
#include<conio.h>
#include<windows.h>
#include<process.h>

using namespace std;

//DECLARE CODES//
void HAHAHA(int,int);
void clrscr();


int main()
{
	// VARIABLE FOR NAMES //
	char NAME[] = "SETH MARCUS S. MARTIN";
	char PROF[] = "ENGR. MARLON G. BAGARA";
	
	// 80 (TOTAL LINE) 19 (NUMBER OF CHARACTER) / 2 (DIVIDED BY 2) //
	// PRINT THE CODE//
	HAHAHA((80-19)/2,4);
	cout<<"NATIONAL UNIVERSITY";
	
	HAHAHA((80-6)/2,5);
	cout<<"Manila";
	
	HAHAHA((80-22)/2,8);
	cout<<"COLLEGE OF ENGINEERING";
	
	HAHAHA((80-31)/2,9);
	cout<<"Computer Engineering Department";
	
	HAHAHA((80-15)/2,12);
	cout<<"CPPROG2L-COE211";
	
	HAHAHA((80-24)/2,13);
	cout<<"Program Logic and Design";
	
	HAHAHA(15,16);
	cout<< NAME << endl;
	
	HAHAHA(48,16);
	cout<<"BS in CompEng";
	
	HAHAHA((80-22)/2,19);
	cout<< PROF << endl;
	
	HAHAHA((80-9)/2,20);
	cout<<"Professor";
	
	HAHAHA((80-9)/2,23);
	cout<<"  ";		
	
	return 0;
}

//GET X AND Y//
void HAHAHA(int x,int y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	
	dwCursorPosition.X=x;
	dwCursorPosition.Y=y;
	
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
	
}


void clrscr()
{
	system("cls");
	
}