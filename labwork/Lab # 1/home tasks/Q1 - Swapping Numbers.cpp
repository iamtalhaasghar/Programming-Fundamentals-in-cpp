
					// a program that inputs two numbers from user and swap those numbers.


// Take Home ***REMOVED***#1
// Question#1
// ***REMOVED***
***REMOVED***


#include<iostream>				// allows program to input/output data
#include<conio.h>				// allows program to display output

using namespace std;			 // The standard namespace
int main(void)					// A Function "main"


{							// start of function main

	

	int num_1=0, num_2=0;			// Variables to store two entered numbers
	
	int copy_1=0, copy_2=0;			// Variables used to copy and swap entered numbers



//***************************************************************************************************
//									Getting the numbers from user
//***************************************************************************************************


	cout<<"\t\"A program to swap and print two numbers entered by user.\"";	
												//prints purpose of program


	cout<<"\n\n\nPlease Enter First Number:  ";		// prompt user for data	
	
	cin>>num_1;								// reading first number entered


	cout<<"Please Enter Second Number:  ";	// prompt user for data
	
	cin>>num_2;								// reading second number entered




//***************************************************************************************************
//									Swapping the numbers
//***************************************************************************************************
	
	

	copy_1=num_1;				// copying first number to Variable "copy_1"
	
	copy_2=num_2;				// copying second number to Variable "copy_2"



	num_1=copy_2;				// copying second number to Variable "num_1"		
	
	num_2=copy_1;				// copying first number to Variable "num_2"

	

//***************************************************************************************************
//									Output (displaying results of Swapping)
//***************************************************************************************************
	

	
				

	cout<<"\n\n\t\t(After Swapping)\n\n";
	
	cout<<"First Number is: "<<num_1<<"\nSecond Number is: "<<num_2<<endl;
	
	
	
	cout<<"\n\nProgramming by:\n\t\t   \"TALHA ASGHAR\"\n";



	getch();			// required to display results until a key is pressed
	
	return 0;			// indicates that program ended successfully


}								// End of Program.