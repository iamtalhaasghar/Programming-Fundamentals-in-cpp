#include <iostream>
#include <conio.h>
using namespace std;

//.................................
// Prototyping of Functions Used
//.................................

void credit();
double sum (double a, double b);
double sub (double a, double b);

//................................

int main(void)   // Start of Main
{
	system("cls");
	
	credit();
	
	int num1=0,num2=0;
	double Result=0.0;

	cout<<"Please Enter 1st number: ";
	cin>>num1;

	
	cout<<"Please Enter 2nd number: ";
	cin>>num2;

	Result = sum(num1,num2) + sub(num1, num2);
	
	cout<<"\nResult of Calculation is: "<<Result;
	
	cout<<"\n\nEnd of Program!\n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";


	_getch();

}

//........................................................................
// Definations of Functions
//........................................................................


void credit ()
{
	
	cout<<"Programing By:\n\t\t\"Talha Asghar\"\n\t     (Computer Scientist)\n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";

}


double sum (double a, double b )
{

	double result=0.0;
	result=a+b;
	return result;

}


double sub (double a, double b )
{

	double result=0.0;
	result=a-b;
	return result;

}