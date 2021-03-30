


#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

const int s=5;

int main()
{
	int num[s]={};
	int *n=0;
	
	n=&num[0];



	cout<<setw(30)<<"Reading and printing array using pointers\n\n\n";


	for( int i=0 ; i<s ; i++)
	{
	
		cout<<"Enter number#"<<i+1<<" is : ";
		cin>>*n;
		n++;
	
	}

	n=&num[0];

	for( int i=0 ; i<s ; i++)
	{
	
		cout<<"\nNumber#"<<i+1<<" is : ";
		cout<<*n;
		n++;
	
	}





	cout<<"\n\nEnd of Program!";

	_getch();

}

