#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int numbers[5] = {5,8,9,10,11};

	cout<<"Elements in array are : \n";
	for (int i = 0; i < 5; i++)
	{
		cout<<numbers[i]<<"\t";
	}

	_getch();
}
