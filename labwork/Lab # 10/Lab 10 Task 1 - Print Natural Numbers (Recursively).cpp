
								
												//  Program to natural numbers upto a number entered by user


/*
...............................................................................
							Libraries to Include
...............................................................................
*/


#include<iostream>
#include<conio.h>

//..................................................................................


using namespace std;	// the standard namespace

/*
...............................................................................
					prototypes of function to be used						
...............................................................................
*/

void natural(int num);





//......................................................................................

int main()				// function "main"
{

	int number=0;

	cout<<"\n\n\n\tProgram to Print Natural Numbers\n\n\n";

	cout<<"Please Enter a Number: ";
	cin>>number;

	natural(number);


	_getch();


}					// end of main



/*............................................................
		function to calculte the natural numbers
............................................................*/



void natural(int num)
{
	
	if(num==0)
		return;				// base value '1' of recursive function
	cout<<endl<<num<<endl;
	natural(num-1);
	
}								// end of function natural 