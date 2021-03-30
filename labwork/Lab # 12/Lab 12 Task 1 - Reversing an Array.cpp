
#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	
	int size;
	 
	int my_array[15];
	int reverse_array[15];
	
	cout << "Please Enter the size of Array : ";
	cin >> size;
	
	cout << "\n\nPlease Enter the elements of the array: \n\n";
	
	for (int i = 0; i <= size - 1; i++)
		{
			cout <<"\nEnter Element ["<<i+1<<"] : ";
			cin >> my_array[i];
			
		}
	
	
	
	cout << "\n\n\nThe reverse array is: ";

	for (static int j = 0; j<=size-1; j++)
	
		for (static int i = size - 1; i >= 0; )
		{
			reverse_array[j] = my_array[i];
			cout <<"\t"<< reverse_array[j];
			i--;
			break;
		}



	_getch();

}