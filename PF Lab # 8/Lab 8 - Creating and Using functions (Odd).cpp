
		// "Program to make 3 functions assigned to odd roll number and to use them in body of main."

// Lab 8
// ODD ROLL NUMBER
// TALHA ASGHAR
// CS-172069



//.........................................................
//	Libraries to be used in this program 
//.........................................................


#include<iostream>
#include<conio.h>

using namespace std;    // the "Standard Namespace"


//............................................................................................
//	Functions to be used in this in program (Prototype of Functions being used)
//............................................................................................


void great(int a,int b, int c);   // Function "great" to determine the largest number from 3 given numbers

void even_odd(int a);			// Function "even_odd" to determine if the number entered is odd or even

void pattern(void);				// Function "pattern "to print pattern of asterisks

int main(void) 

{								// Start of function "Main"
	
	
	int choice=0;		// variable choice to determine choice of user
	
	int num1=0, num2=0, num3=0;		// variables to store 3 different numbers which will be used randomly in program
	


//............................................................................................
//				Printing purpose of Program and telling about available functions
//............................................................................................


	cout<<"\t\t\t\"3 Functions Assigned to Odd Roll Number\"";
	cout<<"\n\n.................................\n";
	cout<<"\nWhat do you want to do?\n\n1=Check largest number among 3 entered numbers.\n";
	cout<<"2=Check wether a number entered is even or odd.\n3=Some pattern of asterisks.";
	cout<<"\n.................................\n";



	cout<<"\nNow Enter your Choice: ";	 
	cin>>choice;				// collecting choice of user
	


	if(choice==1)				//  choice 1 to determine largest number
	{
		
		cout<<"\n.................................\n";
		cout<<"\n\'Checking Largest Number among three entered numbers\'\n\n";
		


		cout<<"\nPlease Enter 1st Number: ";
		cin>>num1;			// getting number 1 from user
		
		cout<<"Please Enter 2nd Number: ";
		cin>>num2;			// getting number 2 from user
		
		cout<<"Please Enter 3rd Number: ";
		cin>>num3;			// getting number 3 from user
	


		great(num1, num2, num3);		// calling the function "great"
		


	
	}		// end of choice 1

	
	else if (choice==2)				//  choice 2 to determine if number is even or odd
	{
		
		cout<<"\n.................................\n";
		cout<<"\n\'Checking Whether a number is even or odd.\'\n\n";
		

		cout<<"Please Enter a Number: ";
		cin>>num1;				// collecting number to check if it is even or odd


		even_odd(num1);		// calling the function "even_odd"
	
		

	}		// end of choice 2
	
	
	else if (choice==3)				//  choice 3 to print pattern of asterisks
	
	{
		
		cout<<"\n\'Printing Pattern of Asterisks\'";  // printing the heading of choice 3
		
		pattern();				// calling the function "pattern"
	
	}		// end of choice 3


	else			// if choice is other than 1,2 and 3 print warning message
		
	{
			cout<<"\nOops! You Have Entered incorrect choice.\n";
	}
	
	
	cout<<"\n.................................\n";
	cout<<"\n\nProgram Ended Successfully!\n";		// Printing message to indicate that program is ended.


	getch();
	return 0;





}					// end of body of function "Main"



//.........................................................
//	Defination of Function "great"
//.........................................................



void great(int a,int b, int c)
{
	int largest=0;
	
	if (a>b && a>c)			
		largest=a;
	else if (b>a && b>c)
		largest=b;
	else if (c>a && c>b)
		largest=c;

	cout<<"\nThe largest number Entered is: "<<largest;


}

//.........................................................
//	Defination of Function "even_odd"
//.........................................................





void even_odd ( int a)
{
	int sum=0;
	
	for (int counter=1; counter<=a; counter++  )
	{
			
		sum=sum+counter;
	
	}

	if (a%2==0)
		cout<<"\nThe number Entered "<<a<<" is an Even Number.";
	else
		cout<<"\nThe number Entered "<<a<<" is an Odd Number.";

	cout<<"The sum of numbers upto "<<a <<" is "<<sum<<" .\n";

}

//.........................................................
//	Defination of Function "pattern"
//.........................................................




void pattern(void)
{
	int num=5;
	int i,k,l;
		
	int stars=0,spaces=0;

	stars=(2*num)-1;
	spaces=0;
		
	cout<<"\n\n";

	for (int i=num; i>=1 ; i-- )
	{
			
		for( l=0 ; l<spaces  ; l++ )	
		{
			
			cout<<" ";	
			
		}
				
		spaces=spaces+1;
			
		for (int k=stars ;   k>=1     ;k-- )
			
		{
			
				cout<<"*";
			

		}
			
		cout<<"\n";
		stars=stars-2;
			
				
		
		}


}