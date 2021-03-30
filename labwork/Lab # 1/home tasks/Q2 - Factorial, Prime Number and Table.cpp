
/* A program that enters a integer from user, and then gives user a menu of options and perform the
Mathematical operations according to the option selected by user. */


// Take Home ***REMOVED***#1
// Question#2
// ***REMOVED***
***REMOVED***



#include<iostream>		// allows program to input/output data
#include<conio.h>		// allows program to display output


using namespace std;			 // the standard namespace
int main(void)					// A Function "main"



{							// start of function main

	


//********************************************************************************************************
//				Declarations and initializations of "Global Variables" used in the whole program.
//********************************************************************************************************




	int num;			// variable to store entered number
	
	char choice = '0';		// variable to store choice of user which determines path to follow
	
	int counter = 0;		// variable "Counter" to control the loops of program





//*******************************************************************************************************
//							Printing the Purpose of Program
//*******************************************************************************************************



	cout << "\"A program that enters a integer from user, and then \nperforms the ";
	
	cout << "mathematical operations according to the\n option selected by user.\"\n";
	
	cout << "...................................................\n\n\n";
		
	


//**************************************************************************************************************
//	Getting the required Number from user and telling him to type sentinel value (-1) to EXIT (if he wants)
//**************************************************************************************************************


			
	cout << "Please Enter a Number (-1 to Exit):  ";	// prompts user for data
	
	cin >> num;				// reading the number entered
	



//*************************************************************************************************************
//				The Master "while loop" which will execute the main body of program 
//*************************************************************************************************************


					// the master while loop continues until sentinel value (-1) is typed by user to exit


	while ( num != -1 )		// if num is equal to -1 loop terminates	
	
	{				 // start of the master "while" loop

		

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
						// Printing the menu of options
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		

		
		cout << "...................................................\n";
		
		cout << "\n\nEnter \'1'\ to calculate its factorial.\n";
		cout << "Enter \'2'\ to check if it is a prime number or not.\n";
		cout << "Enter \'3'\ to display its table.\n\n";



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
				// Prompting for and Getting the user`s choice
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
	


		cout << "Please Enter your choice:  ";
		cin >> choice;



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
		// Choice # 1 : Calculating Factorial of number entered
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



		if ( choice == '1' )
		
		{		// start of body of if statement
			

			cout << "....................\n";
			cout << "\n\nCalculating factorial of "<<num<<" .\n";
			


			
			long int factorial = 1;		// variable to store "factorial" of number
			
			counter = num;			// assigning counter the value of num

			
			
			while (counter > 0 )		// loop continues until counter is greater than '0'
			
			{				// nested while loop to calculate factorial 
				
				
				factorial *= counter;		// calculating the factorial
				
				-- counter;			// pre-decrementing  "counter"
			
			
			}				// end of nested while loop

			

										// Printing factorial of the number	

			cout <<"\nFactorial of "<<num<<" is "<<factorial<<endl;
			cout <<"\nTask Completed Successfully!\n\n\a";

	
		
		}		// end of body of if statement





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
		// Choice # 2 : Checking if the number entered is a prime number
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
		
		
		
		else
			
			if ( choice == '2' )
			
			{			// start of body of if statement
			
			
				
				cout<<"....................\n";
				cout<<"\n\nChecking whether "<<num<<" is a prime number or not.\n";
						

				
				float prime = 1;	// variable to be used to determine if "num" is a prime number
				
				int divisor = 2;		// declaration and initialization of variable "divisor" to '2'
				
				
				
				do			// do-while loop inside a while loop 
				{
					

					
					prime = num % divisor;		// determining if "num" is prime number
					
					

					if ( prime == 0 )		// breaks loop if "num" is divisible by some "divisor"
						{ break; }
					
					++ divisor;		// pre-incrementing "divisor"
				

				} while ( divisor < num );	 // loop continues until divisor is less than or equal to num
		
				

										// printing results
				if ( prime == 0 )				
					{ cout<<"\nThe Number "<<num<<" is not a prime number.\n"; }
				
				else
					{ cout<<"\nThe Number "<<num<<" is a prime number.\n"; }
				
			


				cout<<"\nTask Completed Successfully!\n\n\a";
				
			
			}		// end of body of if statement
			
			
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
		// Choice # 3 : Printig the table of number entered upto given multiplier
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
					
			
			
			
			else 
			
				if( choice == '3' )
				
				{			// start of body of if statement
					
					
					cout<<"....................\n";
					cout<<"\n\nYou Chooosed to print the table of "<<num<<" .\n\n";



					int multiplier=0;	// variable to store "multiplier" upto which table of num is printed
					
					int	product = 1;		// variable to store product of "num" and "counter" 
					
					
					
					cout<<"Please Enter the number upto which you want to calculate its Table:  ";
					
					cin>>multiplier;	// reading value of "multiplier"
					
				
					cout<<"\nTable of "<<num<<"\n\n";


					for ( counter = 1 ; counter <= multiplier ; ++ counter )
						
						{	// start of for loop 	


							
							product = num * counter;		// calculating product of "num" and "counter" "
							
							cout <<num<<" x "<<counter<<" = "<<product<<endl;	// printing the table
							
						
						}	// end of for loop

					
					
					cout<<"\nTask Completed Successfully!\a\n\n";

			
				}			// end of body of if statement





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
		//Prompting an error message if correct choice was not entered 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
					


				else
				{
					cout<<"\aWrong Choice.\n";
					cout<<"Program will start again! \n";
					
				}




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~		
	// Again Printing the menu of options if user wants to continue or not
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




		cout<<"\n\nPlease Enter a Number again (-1 to Exit):  ";
		cin>>num;
	
		
	}				// end of the master "while" loop




//*******************************************************************************************************
//				Printing the Message "End of Program" if user typed sentinel value "-1"
//*******************************************************************************************************





	cout<<"....................\n";
	cout<<"\n\nEnd of Program.\a";

//............................................................................

	
	getch();		// required to display results until a key is pressed
	return 0;		// indicates that program ended successfully

}							// end of function main
									
								//end of program