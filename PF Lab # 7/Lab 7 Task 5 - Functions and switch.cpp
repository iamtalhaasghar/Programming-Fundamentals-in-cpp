

#include <iostream>  // Pre-Processor Directive "Input Output Stream"
#include <conio.h>		//Directive to show results
using namespace std;	// standard namespace


void credit ()   // defination of function "Credit"
{
	
	cout<<"Programing By:\n\t\t\"***REMOVED***\"\n\t     (Computer Scientist)\n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";


}


void sum (int a, int b )			// Defination of Function " sum " for adiition
{

	cout<<"\nSum is = "<<a+b<<endl;		// body of function "sum"

}


void sub (int a, int b )		// Defination of Function " sub " for subtraction
{

	cout<<"\nDiffernce is = "<<a-b<<endl;	// body of function "sub"

}




void mul (int a, int b )		// Defination of Function " mul " for multiplication
{

	cout<<"\nProduct is = "<< a * b <<endl;		// body of function  "mul"

}



void division (int a, int b )		// Defination of Function "	division " for division

{
	if(b==0)					// body of function "division"
		{
			cout<<"\nSyntax Error! Division by zero not possible.";
		}
	
	else
		{
			cout<<"\nWhen "<<a<<" is divided by "<<b<<";\nQuotient is = "<< a / b<< "\nRemainder is = "<<a % b <<endl; // printing result of division
		}
}


int main(void)

{				// start of main

	
	system("cls");   // clear screen function
	
	credit();		// call of function "Credit"
	
	int x=0,y=0;		// delarations of variables 'x' and 'y' to store first and second number
	
	char choice='0';	// declarations of variable "choice" to read choice of user

	cout<<"Please Enter 1st number: ";  // Prompt user for data
	
	cin>>x;							// reading first number

	
	cout<<"Please Enter 2nd number: ";		// Prompt user for data
	
	cin>>y;				// read second number

	cout<<"\nAvailabe choices are:\n1=Addition \t 2=Subtraction \t 3=Multiplication \t 4=division";			// print available choices
	
	cout<<"\n\nPlease Enter your Choice: ";		// Prompt user for choice
	
	cin>>choice;		// reading choice of user


//.................................................
//Switch statement to perform desired function
//.................................................	
	


	switch (choice)		
	{ 
		case '1':		// case 1 "Addition"
			
			{
				sum(x,y);
				break;
			}
		
		case '2':		// case 2 "Subtraction"
			
			{
				sub(x,y);
				break;
			}
		
		case '3':		// case 3 "Multiplication"
			
			{
				mul(x,y);
				break;
			}
		
		case '4':		// case 4 "division"
			
			{
				division (x,y);
				break;
			}

		default:		// default case 
			
			cout<<"\nError! Incorrect Choice!";
			
	
	}							// end of switch statement 




	cout<<"\n\nEnd of Program!\n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";



	_getch();

}			// end of main