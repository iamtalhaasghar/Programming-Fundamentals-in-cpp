#include<iostream>
#include<conio.h>

using namespace std;

void minimum();
void printTable();
void printPattern();

int main(){

	int choice = 0;
	cout<<"\n\nMain Menu: \n\n"
		<<"1) Find minimum from two numbers.\n"
		<<"2) Print table of a number. \n"
		<<"3) Print a pattern of asterisks.\n\n";

	cout<<"Enter a choice : ";
	cin>>choice;

	switch (choice)
	{
	case 1:
		minimum();
		break;
	case 2:
		printTable();
		break;
	case 3:
		printPattern();
		break;
	default:
		cout<<"\nInvalid Choice.\n";
		break;
	}

	_getch();
}

void minimum(){
	int a = 0;
	int b = 0;
	int min = 0;
	cout<<"Enter number # 1 : ";
	cin>>a;
	cout<<"Enter number # 2 : ";
	cin>>b;

	if(a < b){
		min = a;
	}
	else{
		min = b;
	}

	cout<<"\nThe minimum number is : "<<min<<endl;

}

void printTable(){
	
	int number = 0;
	cout<<"Enter a number : ";
	cin>>number;
	cout<<"\n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;
	}

}

void printPattern(){
	
	int length = 0;
	cout<<"Enter length of pattern : ";
	cin>>length;

	int spaces = length - 1;
	int stars = 1;

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
}