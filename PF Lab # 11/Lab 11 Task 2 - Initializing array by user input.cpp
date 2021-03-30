#include<iostream>
#include<conio.h>

using namespace std;
int main(){

	int numbers[10];

	cout<<"Enter elements of array : \n\n";

	for (int i = 0; i < 10; i++)
	{
		cout<<"Element # "<<i+1<<" : ";
		cin>>numbers[i];
	}

	cout<<"\n\nElements in array are : \n";
	for (int i = 0; i < 10; i++)
	{
		cout<<numbers[i]<<"  ";
	}

	_getch();
}
