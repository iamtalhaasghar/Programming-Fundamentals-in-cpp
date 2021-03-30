//Lab 3
//Program to Find whether the number is Positive,Negative or is Zero.

#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int num;	//Declaration of a variable "num" corresponding to a Number. 

	cout<<"Please Enter any Number:\t";		//Prompt user for Data
	cin>>num;				//Collecting Data from User

		//Printing the Result; Depending on the Condtion which it fullfills

	if (num>0)
		cout<<"The Given Number "<<num<<" is \"Positive\".\n";
	else 
		if (num==0)
			cout<<"The Given Number "<<num<<" is \"Zero\".\n";
		else
				cout<<"The Given Number "<<num<<" is \"Negative\".\n\n\n";
	
	getch();
}