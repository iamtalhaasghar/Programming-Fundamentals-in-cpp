


										// Reading, reversing, swapping and sorting two arrays using loops

// ***REMOVED***
***REMOVED***
// Mega Task Lab 12


#include <iostream>
#include <conio.h>

using namespace std;


inline void line(void)
{

	cout << "\n\n....................................................................\n\n";


}




int main()
{
	int size = 1,temp=0;

	int array1[10], array2[10];

	cout << "Enter the size of arrays: ";
	cin >> size;
	


	// getting array 1



	cout << "\n\nPlease Enter the elements of the Array#1: \n\n";

	for (int i = 0; i <= size - 1; i++)
	{
		cout << "Enter Element [" << i + 1 << "] : ";
		cin >> array1[i];

	}


	// getting array 2



	cout << "\n\nPlease Enter the elements of the Array#2: \n\n";

	for (int i = 0; i <= size - 1; i++)
	{
		cout << "Enter Element [" << i + 1 << "] : ";
		cin >> array2[i];

	}


	line();
	

	// reversing array 1
	

	int reverse_array[10] = {};

	cout << "\n\n\nThe reverse array 1 is: ";

	for (static int j = 0; j <= size - 1; j++)
	{
		for (static int i = size - 1; i >= 0; )
		{
			reverse_array[j] = array1[i];
			
			i--;
			break;
		}
	
	}

	for ( int i=0; i<=size-1 ; i++)
	{
		array1[i] = reverse_array[i];
		cout << "\t" <<array1[i];
	
	
	}

	line();



	// reversing array 2



	reverse_array[10] = {};

	cout << "\n\n\nThe reverse array 2 is: ";

	for (static int j = 0; j <= size - 1; j++)
	{
		for (static int i = size - 1; i >= 0; )
		{
			reverse_array[j] = array2[i];

			i--;
			break;
		}

	}

	for (int i = 0; i <= size - 1; i++)
	{
		array2[i] = reverse_array[i];
		cout << "\t" << array2[i];


	}

	line();



	// swapping arrays



	cout << "\n\nSwapping Arrays\n\nAfter Swapping :";
	for (static int i = 0; i <= size - 1; i++)
	{
		for (static int j = 0; j <= size - 1; )
		{
			temp = array2[j];
			array2[j] = array1[i];
			array1[i] = temp;
			j++;
			break;
		}



	}



	cout << "\n\nNow Elements of Array 1 are : \n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "\nElement [" << i + 1 << "] : ";
		cout << array1[i];
	}

	cout << "\n\nNow Elements of Array 2 are: \n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "\nElement [" << i + 1 << "] : ";
		cout << array2[i];
	}

	line();



	// sorting array 1 in descending order



	cout << "\n\nSorting Arrays in Descending Order :\n\n";

	for (int i = 0; i <= size - 1; i++)
	{
		for (int j = 0; j <= size - 1; j++)
		{
			if (array1[j] < array1[j + 1])
			{
				temp = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = temp;
			}


		}

	}



	cout << "\n\nAfter Sorting Array 1 in Descending Order:\n\n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "\nNumber [" << i + 1 << "] is : ";
		cout << array1[i];
	}

	line();


	// sorting array 2 in descending order


	for (int i = 0; i <= size - 1; i++)
	{
		for (int j = 0; j <= size - 1; j++)
		{
			if (array2[j] < array2[j + 1])
			{
				temp = array2[j];
				array2[j] = array2[j + 1];
				array2[j + 1] = temp;
			}


		}

	}



	cout << "\n\nAfter Sorting Array 2 in Descending Order:\n\n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "\nNumber [" << i + 1 << "] is : ";
		cout << array2[i];
	}




	_getch();
}




