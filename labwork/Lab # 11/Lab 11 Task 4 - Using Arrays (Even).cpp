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

	cout<<"\nEven numbers in array are : \n";
	int countEven = 0;
	int sum = 0;
	
	for (int i = 0; i < 10; i++)
	{
		if(numbers[i]%2==0){
			cout<<numbers[i]<<"  ";
			countEven++;
		}
		sum += numbers[i];
	}
	
	cout<<"\nTotal Even numbers = "<<countEven;
	cout<<"\n\nSum of all numbers in array is : "<<sum<<endl;

	_getch();
}
