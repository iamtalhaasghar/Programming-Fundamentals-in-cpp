#include<iostream>
#include<conio.h>

using namespace std;
int main(){

	int numbers[10];

	cout<<"Enter the elements of array : \n";
	for (int i = 0; i < 10; i++)
	{
		cout<<"Element # "<<i+1<<" : ";
		cin>>numbers[i];
	}

	cout<<"\nOdd numbers in array are : \n";
	int countOdd = 0;
	int sum = 0;
	
	for (int i = 0; i < 10; i++)
	{
		if(numbers[i]%2==1){
			cout<<numbers[i]<<"  ";
			countOdd++;
		}
		sum += numbers[i];
	}
	
	cout<<"\nTotal Odd numbers = "<<countOdd;
	cout<<"\n\nSum of all numbers in array is : "<<sum<<endl;

	_getch();
}
