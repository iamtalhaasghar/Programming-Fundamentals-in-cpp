#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int length = 0;
	cout<<"Enter length of pyramid : ";
	cin>>length;

	int stars = 1;
	int spaces = length -1;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout<<" ";
		}
		spaces--;
		for (int k = 0; k < stars; k++)
		{
			cout<<"*";
		}
		stars += 2;
		cout<<endl;
	}

	_getch();
}

