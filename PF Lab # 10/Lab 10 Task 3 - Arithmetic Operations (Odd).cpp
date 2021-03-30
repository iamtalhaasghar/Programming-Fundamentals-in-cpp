
									//  Program to perform arithmetics calculations using functions and calling them by reference 


/*
...............................................................................
							Libraries to Include
...............................................................................
*/


#include<iostream>
#include<conio.h>
#include<iomanip>			// library of 'input output manipulation'

//..................................................................................


using namespace std;	// the standard namespace

/*
...............................................................................
					prototypes of function to be used						
...............................................................................
*/


void twice(float &num);		// function to calculate twice of given number

void divide(float &num);	// function to divide number by 3

void calculate(float &x,float &y, float &z);		// function to calculate some given expressions


//......................................................................................

int main()				// function "main"
{

	float number=0;			// declaring the variable 'number' of type 'float'
	float x=0,y=0,z=0;

	cout<<"\n\n\tProgram to calculate different arithmetic operations using functions\n\n\n"; 
	
	cout<<"Please Enter a Number: ";			// prompt and getting the number from user
	cin >> number;

	


	cout<<"\n\n\n>The twice of "<<number<<" is : ";
	twice(number);			// calling the function 'twice' to calculate twice of given number
	cout<<number<<" \n";
	

	cout<<">Dividing "<<number<<" by 3 gives : ";
	divide(number);			// calling function to divide number by 3
	cout<<number<<" \n\n";
	 

	
	x=number;
	
	cout<<"Before Calculation : \n"
		<<"x : "<<x<<"\ny : "<<y<<"\nz : "<<z<<endl;

	calculate(x,y,z);		// calling function to calculate some given expressions
	
	
	cout<<"After Calculation : \n"
		<<"x : "<<x<<"\ny : "<<y<<"\nz : "<<z<<endl;

	cout<<"\n\nEnd of Program!!";


	getch();


}					// end of main



/*............................................................
		function to calculte cube of a number
............................................................*/



void twice(float &num)
{
	
	num= 2*num;


}								// end of function 



/*............................................................
		function to calculte subtracting the number by 3
............................................................*/


void divide(float &num)
{
	 num=num/3.0;
	


}								// end of function 




/*........................................................................
		function to calculate given expressions of a number
.........................................................................*/


void calculate(float &x,float &y,float &z )
{
	
	x=5*x+7;
	y=2*x-3;
	z=5*x+2*x;

}								// end of function 