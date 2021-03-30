

#include <iostream>  // Pre-Processor Directive "Input Output Stream"
#include <conio.h>		//Directive to show results
using namespace std;	// standard namespace


void credit ()   // defination of function "Credit"
{
	cout<<"Programing By: ***REMOVED***\n\t\"Computer Scientist\"\n";
	cout<<"............................\n\n\n";


}


void sum (int a, int b )			// Defination of Function " sum " for adiition
{

	cout<<"\nSum is = "<<a+b<<endl;		// body of "sum"

}


void sub (int a, int b )		// Defination of Function " sub " for subtraction
{

	cout<<"\nDiffernce is = "<<a-b<<endl;	// body of "sub"

}




void mul (int a, int b )		// Defination of Function " mul " for multiplication
{

	cout<<"\nProduct is = "<< a * b <<endl;		// body of "mul"

}



void division (int a, int b )		// Defination of Function "	division " for division

{
	if(b==0)					// body of "division"
		
		{
			cout<<"\nSyntax Error! Division by zero not possible.";
		}
	
	else

	cout<<"\nWhen "<<a<<" is divided by "<<b<<";\nQuotient is = "<< a / b<< "\nRemainder is = "<<a % b <<endl;


}


int main(void)

{
	system("cls");
	
	credit();
	
	int x=0,y=0;
	
	cout<<"Please Enter 1st number: ";
	cin>>x;

	
	cout<<"Please Enter 2nd number: ";
	cin>>y;

	sum(x,y);

	sub(x,y);

	mul(x,y);

	division (x,y);

	_getch();

}