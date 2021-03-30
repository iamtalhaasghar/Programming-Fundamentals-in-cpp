
/*Lab 4 Mega Task - Program to calculate Cubes of numbers from 1 to 
a given number using both, while and for loops */

#include<iostream> 	 		//pre-processor directive for input/output command
#include<conio.h>			//another pre-processor directive

using namespace std; 		 //library of standard namespace
int main(void)      			//main function

{
	 
	 char loop='0';    		//declaration of variable to store character which determines loop to use
	 
	 int num=0, counter=1;  		 //declaration of variables to number and counter variable which controls loop 
	 int cube=0;   							 //declaration of variable to store cube
	 
	 cout<<"Program to calculate the cubes using loops.\n\nType '1' to use \"While Loop\".";	//printing program info.
	 cout<<"\nType '2' to use \"For Loop\".\n\n";		
	 cout<<"Please Enter your choice:\n";			
	
	 cin>>loop; //reading value entered for variable loop
	 
	 
	 if (loop=='1')			//loop 1 "while loop"
	 	{
	 		
			 cout<<"\nUsing While Loop.\n\n";		//message telling while loop is used
			 cout<<"Now please Enter the length:\t";   //prompt user a message to enter length
	 		
			 cin>>num;							//reading the variable num
			 cout<<"\nNumber\t\tCube\n";			//output heading
		 	
			 while (counter<=num)		//while loop to calculate cube
			{
		
				cube=counter*counter*counter;	//calculating cube
			
				cout<<counter<<"\t\t"<<cube<<"\n";		//printing result
			
				counter++;    //updating counter
			
			}
		}
	
		
	 else	
		
		if (loop=='2')    //loop 1 "while loop"
	 	{
	 		
			 cout<<"\nUsing For Loop\n\n";			//messing telling while loop is used
			 cout<<"Now please Enter the length:\t";	//prompt user a message to enter length
	 		
			cin>>num;			//reading the variable num
			cout<<"\nNumber\t\tCube\n";		//output heading
		 	
			 for (;counter<=num;counter++)		//for loop to calculate cube
			{
		
				cube=counter*counter*counter;			//calculating cube
			
				cout<<counter<<"\t\t"<<cube<<"\n";		//printing result

			}
	
		}
		else
		{
			cout<<"Wrong Number.";
					
		}
	
		
		
	getch();
	
	
	
}
