

						// SORTING ARRAY USING POINTERS



// Talha Asghar	(.cpp Hero)
// Lab Task 14


/******************************************************************************************************
									 libraries to include
*******************************************************************************************************/


#include<iostream>
#include<conio.h>
#include<iomanip>


				
using namespace std;	// the standard namespace

const int s=10;			// constant int to declare size of array statically


/******************************************************************************************************
						functions to be used in the program 
*******************************************************************************************************/


void read_array( int *ptr, int size=10 );		// function to read or get array from user
void print_array(int *ptr, int size=10);		// function to print array 
void sort_array_ascend(int *ptr_a, int size);	// functio to sort array in ascending order
void sort_array_descend(int *ptr_a, int size);	// function to sort array in descending order

//________________________________________________________________________________________________________



int main(void)				// the function "main"
{
	
	int num[s]={0};					// array "num" to store the numbers
	char choice = '0';				// array "choice" to store choice of user



	cout<<"\n\n\t\t\t\"SORTING ARRAY USING POINTERS\"\n\n\n";


	// get elements for array "num"
	
	cout<<"Enter the Elements of Array : \n\n";
	read_array(&num[0],s);			// calling function "read" to get numbers from user




	// prompting the available choices

	cout << "\n\nSelect the sort type : \t\t";
	cout << "a=Ascending \t d=Descending \n";
	cin >> choice;


	// printing array before "sortion"

	cout << "\n\nElements of Array before sorting are : \n\n";
	print_array(&num[0], s);			// calling function "print_array" to print array "num" 



	// if..else.. statement to determine choice of user


	if (choice == 'a'|| choice == 'A')
	{
		sort_array_ascend(&num[0], s);		//  calling function "sort_array_ascend"
	}
	else if (choice == 'd' || choice == 'D')
	{
		sort_array_descend(&num[0], s);		//  calling function "sort_array_descend"


	}
	else 
	{
		cout << "\n\n Warning: Invalid Choice!\a";		// invalid choice
	}
	
	// printing array after "sortion"

	cout<<"\n\nElements of Array after sorting are : \n";
	print_array(&num[0],s);		// calling function "print_array" to print array "num" 	
	 

	_getch();					// halts the screen 



}			// end of body of "main"








/******************************************************************************************************
					Definations of functions used in the program 
*******************************************************************************************************/




// function "read_array" to print array of given size using address of 1st element

void read_array(int *ptr, int size)
{
	
	// loop to read and get elements until last location is reached

	for (int i = 0; i<size; i++)
	{
		cin >> *ptr;					// get value using pointer "*ptr"
		ptr++;							// now point to address of next element of array

	}			// end of for loop


}				// end of function "read_array" 

//..............................................................................................

// function "print_array" to print array of given size using address of 1st element

void print_array(int *ptr, int size)
{

		// loop to print elements until last element is reached

	for(int i=0; i<size; i++)
	{
		cout<<"\nNumber # "<<i+1<<" is : ";

		cout<<*ptr;						// print value of address stored in pointer "*ptr"
		ptr++;							// now point to address of next element of array
		
	
	
	}		// end of for loop
	cout<<"\n\n"<<setfill('*')<<setw(70)<<endl;
	



	

}		// end of function "print_array" 

//..............................................................................................


// function to sort array in ascending order

void sort_array_ascend(int *ptr_a, int size)
{
	int *x=NULL;		// pointer "*x" to point to an element of array
	int *y=NULL;		// another pointer "*y" to point to next element (from element to which " *x " pointing)

	int *e=NULL;		// pointer to store address of last element of an array


	x=ptr_a;			// put address of first element in pointer "*x"
	


	int temp=0;			// variable "temp" for swapping



	// for loop to get address of last element of an array

	for(int i=0 ; i<size ; i++)
	{
		e = x;		// copy address from pointer "*x" to "*e" 
		x++;		// let "*x" to point next element
	
	}	// end of for loop

	
	// nested for loops to sort arrays

	// outer for loop which will point every element of an array from start to end
	for(x=ptr_a ; x<=e ; x++)		
	{
		// inner loop which will point to next element (from element to which "*x" is pointing)
		for(y=x+1; y<=e ; y++)
		{
			if(  *x>*y  )	// if next element is smaller then swap it 
			{
				temp=*x;		// swapping 
				*x=*y;
				*y=temp;

			}      // if statement terminates
		

		}			// inner for loop terminates
				
			
	}				// outer for loop terminates


}			// end of function "sort_array_descend"


//..............................................................................................

// function to sort array in descending order

void sort_array_descend(int *ptr_a, int size)
{
	int *x=NULL;		// pointer "*x" to point to an element of array
	int *y=NULL;		// another pointer "*y" to point to next element (from element to which " *x " pointing)

	int *e=NULL;		// pointer to store address of last element of an array


	x=ptr_a;		// put address of first element in pointer "*x"
	


	int temp=0;			// variable "temp" for swapping


	// for loop to get address of last element of an array
	for(int i=0 ; i<size ; i++)
	{
		e=x;			// copy address from pointer "*x" to "*e" 
		x++;	// let "*x" to point next element
				

	}	// end of for loop


	// nested for loops to sort arrays


	// outer for loop which will point every element of an array from start to end
	for(x=ptr_a ; x<=e ; x++)
	{
		// inner loop which will point to next element (from element to which "*x" is pointing)
		for(y=x+1; y<=e ; y++)
		{
			if(  *x<*y  )	// if next element is smaller then swap it 
			{
				temp=*x;// swapping 
				*x=*y;
				*y=temp;

			}// if statement terminates
		

		}			// inner for loop terminates
				
		
	}				// outer for loop terminates




}			// end of function "sort_array_descend"

//									((((((((((((((( End of Program )))))))))))))