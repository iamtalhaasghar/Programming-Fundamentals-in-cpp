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

	cout<<"\n\nEven numbers in array are : \n";
	for (int i = 0; i < 10; i++)
	{
		if(numbers[i]%2==0){
			cout<<numbers[i]<<"  ";
		}

	}


	_getch();
}
