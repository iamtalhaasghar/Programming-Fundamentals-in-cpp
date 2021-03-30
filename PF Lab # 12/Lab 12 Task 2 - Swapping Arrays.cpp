
#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	
	int size = 0, temp=0 ;
	int array1[15], array2[15];

	cout << "Please Enter size of the Arrays: ";
	cin >> size;


	cout << "\n\nEnter Elements of Array 1: \n\n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "Enter Element [" << i + 1 << "] : ";
		cin >> array1[i];
	}

	cout << "\n\nEnter Elements of Array 2: \n\n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "Enter Element [" << i + 1 << "] : ";
		cin >> array2[i];
	}


	for ( static int i = 0; i <= size - 1; i++)
	{
		
		{
			temp = array2[i];
			array2[i] = array1[i];
			array1[i] = temp;
		
		}



	}



	cout << "\n\nNow Elements of Array 1 are : \n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "\nElement [" << i + 1 << "] : ";
		cout << array1[i];
	}

	cout << "\n\nNow Elements of Array 2: \n";
	for (int i = 0; i <= size - 1; i++)
	{
		cout << "\nElement [" << i + 1 << "] : ";
		cout << array2[i];
	}









	_getch();

}