
#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	int size = 0;
	int numbers[15];
	int temp = 0;
	
	cout << "Enter the size of array: ";
	cin >> size;

	cout << "\n\nEnter the elements of Array: \n\n";
	
	for (int i = 0; i <= size-1 ; i++)
	{
		cout << "Enter number [" << i + 1 << "] : ";
		cin >> numbers[i];
	}
	
	for ( int i = 0; i <= size-1 ; i++)
	{
		for(int j=0; j<=size-1 ; j++ )
		{ 
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		
		
		}

	}



	cout << "\n\nAfter Sorting Array in Ascending Order:\n\n";
	for (int i = 0; i <= size-1 ; i++)
	{
		cout << "\nNumber [" << i + 1 << "] is : ";
		cout << numbers[i];
	}








	_getch();
} 