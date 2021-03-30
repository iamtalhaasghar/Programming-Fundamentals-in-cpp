				
	/* a program that inputs a numbers from user and tells him that how to spell it using function "dig_name". */


// Home task of Lab 8
// Question#1
// Talha Asghar
// CS-172069


//*************************************************************
//     Including Libraires to be used in the program
//*************************************************************


#include<iostream>		// allows program to input/output data

#include<conio.h>		// if number is "0" assign "ZERO" to "spelling" 

#include<string>		// allows program to declare variable of fundamental types "string"

//......................................................................



using namespace std;		// The standard namespace



//**********************************************************************
//		prototypes of functions to be used in body of "main"
//**********************************************************************



void digit_name (int num);		// protoype of Function "digit_name"


int main()						// A Function "main"


{						// start of function main

	
	int number=0;	// declaration and initialization of variable "number" 

//*********************************************
// 	printing purpose of program to user
//*********************************************
	
	
	cout << "Copyright(C). \nProgramming by: \"TALHA ASGHAR\"\n";
	
			
	cout << "\n\n\t\t\"Spellings of the number entered\"\n\n\n";					
	

	cout<<" Please Enter a number from 0 to 9: ";	 // ask user for data
	
	cin>>number;			// getting the number from user


	digit_name (number);		// calling function "digit_name" 
	
	cout << "\n\nEnd of Program!";
	
	_getch();		// displays results until a key is pressed

	return 0;		// indicates that program ended successfully
	


}			// End of function "main".



 //*************************************************************
 //			Defination of function "digit_name"
 //*************************************************************


void digit_name (int num) 	// return type,name and input type of function "digit_name"

{
	
	string spelling="Empty";   // a string variable "spelling" to store the spelling
 	
	

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Nested if.......else.......... to determine the spelling of number
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


	if (num==0)
		spelling="ZERO";		// if number is "0" assign "ZERO" to "spelling" 
	
	else if (num==1)
		spelling="ONE";		// if number is "1" assign "ONE" to "spelling" 
	
	else if (num==2)
		spelling="TWO";		// if number is "2" assign "TWO" to "spelling" 
	else if (num==3)
		spelling="THREE";		// if number is "3" assign "THREE" to "spelling" 
	else if (num==4)
		 spelling="FOUR";		// if number is "4" assign "FOUR" to "spelling" 
	else if (num==5)
		spelling="FIVE";		// if number is "5" assign "FIVE" to "spelling" 
	else if (num==6)
		spelling="SIX";		// if number is "6" assign "SIX" to "spelling" 
	else if (num==7)
		spelling="SEVEN";		// if number is "7" assign "SEVEN" to "spelling" 
	else if (num==8)
		spelling="EIGHT";		// if number is "8" assign "EIGHT" to "spelling" 
	else if (num==9)
		spelling="NINE";		// if number is "9" assign "NINE" to "spelling" 
	else
		spelling="Invalid_Number!"; 	// if number is other than 0-9 assign "Invalid_Number!" to "spelling"



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//	if...else.. to print the correct result or a warning message 	
//		depending on the strings stored in "spelling" 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



	if (spelling != "Invalid_Number!")	// if spelling is not equal to "Invalid_Number!"
	
	{		
		
							// print result
		cout << "\n\n The Number Entered \'" << num
		<< "\' is spelled as \"" << spelling << "\".\n";		
	
	}
	
	else
	
	{
						// otherwise print"warning message"
	
	cout << "\n\n Warning: Wrong Number Entered. Please Enter correct Number.\n";		
	
	}


}			// end of function "digit_name"
