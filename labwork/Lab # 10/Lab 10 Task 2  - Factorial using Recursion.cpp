									


					//  Program to calculate factorial number



/*...............................................................................
							Libraries to Include
...............................................................................*/



#include<iostream>
#include<conio.h>

//..................................................................................


using namespace std;	// the standard namespace


/*...............................................................................
					prototypes of function to be used						
...............................................................................*/


int factorial (int num);





//......................................................................................

int main()				// function "main"
{

	int number=0;
	


	cout << "\n\n\t\tProgram to calculate Factorial of a number\n\n";

			

	// do while loop to ensure that a +ve number is entered by user


	do
	{

		cout << "Please Enter a Positive Number: ";
		cin >> number;


	}while (number<0);				// end of do...while.... loop


	cout<<"\n\nFactorial of "<<number<<" is : "<<factorial (number);


	getch();


}					// end of main


/*......................................................................
		function to calculate factorial of a number
......................................................................*/



int factorial (int num)
{
	
	if(num==0 || num==1)
		return 1;			// base value; factorial of '0' and '1' is 1

	return num * factorial(num-1);		// calculte the factorial of number by recursion



}			// end of function factorial 