	//	Program to sort an Array of Numbers 

***REMOVED***
***REMOVED***
//  ***REMOVED***#3

							 
/***********************************************************
			Libraires to include in program
***********************************************************/

#include<iostream>
#include<conio.h>

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

using namespace std;	// standard namespace

#define MAX 15			// set "MAX" to 15
 
void ascend( int[ ] , int );	          // prototype of function "ascend"



int main()			// the function "main"
{						

// print purpose of program	
cout<<"\n\n\t\t\"Program to Sort an Array\"\n\n\n";			
// declaration of array "numbers" having 'MAX' elements
	
int numbers[MAX];
	
int elements,  i;		// initialization of variables 
	
				
	do		// determining number of elements of array "numbers"
	{
	
		cout<<"Total numbers (0 to 15) you want to sort : ";
		cin>>elements;

	}	while(elements<0 || elements>MAX);
	
								

	// for loop to read the elements of array "numbers"

	for( i=0 ; i < elements ; i++)
	{
		cout<<"\n\tEnter Number # "<<i+1<<" : ";
		cin>>numbers[i];
	}
	
	ascend (numbers , elements);	 // calling function "ascend"
	
	
		// for loop to print the sorted elements
	
	cout<<"\n\n\nNumbers in Ascending Order are: \n\n";

	for(i=0;i<elements;i++)
		cout<<numbers[i]<<"\t";
	
	getch();
	return 0;

}				// end of function "main"
// defination of function "ascend"

void ascend(int arr[],int n)

{
	int temp;
	int i,j;
	
		//	printing original elements of array
	
	cout<<"\n\n\nOriginal Numbers entered are : \n\n";
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";


	//	sorting elements of array in 'ASCENDING ORDER'
	
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])  // condition to arrange elements
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			
			}	// if statement
	
		}	// nested for loop

	}			// for loop
	
	

}			// end of function "ascend"

