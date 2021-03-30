				// program to filter even and odd numbers from an array of specified size



// Libraries to include
// *****************************

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

const int s=10;					// a const int "s" to specify size of arrays

int main(void)
{
	int j=0;			// a variable used for indexing in for loop
	int k=0;			// a variable used for indexing in for loop
	
	int orig_arr[s]={0};		// array "orig_arr" to store input numbers

	int even[s]={0};			// array "even" to store even numbers
	
	int odd[s]={0};				// array "odd" to store even numbers

	cout<<"\n\n\n\tFiltering even and odd numbers from an array\n\n\n";
	cout<<"Enter ten numbers to store in array: \n";



	// input numbers for "orig_arr"

	for ( int i=0; i<s ; i++ )
	{
		
		cout<<"Number # "<<i+1<<" is : ";
		cin>>orig_arr[i];
		

	
	}



	// determine even and odd numbers and store them in respective array

	for ( int i=0; i<s ; i++ )
	{

			// if numbers is even add it to array "even"

			if( (orig_arr[i]) % 2 == 0 )
			{
				even[j]=orig_arr[i];
				j++;
				
			}
			

			// if numbers is odd add it to array "odd"
			else 
			
			{
				odd[k]=orig_arr[i];
				k++;
				
			}

	}
		

	cout<<"\n\n\nEven Numbers are : \n\n";
	


	// loop to print "even" numbers

	for ( int i=0; i<s ; i++ )
	{
		
		
		cout<<even[i]<<"\t";
		

	
	}
	
	
	cout<<"\n\n\nOdd Numbers are : \n\n";
	
	// loop to print "odd" numbers

	for ( int i=0; i<s ; i++ )
	{
		
		
		cout<<odd[i]<<"\t";
		

	
	}


	cout<<"\n\n";
	cout<<setfill('-')<<setw(80)<<endl;

	cout<<"\n\n";
	system("pause");			

}				// end of function "main"