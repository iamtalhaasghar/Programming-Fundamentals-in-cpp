//printing first 20 even numbers using "For loop"
//Lab 4
//task 2

#include<iostream>
#include<conio.h>
using namespace std;
int main(void)

{
	  
	int num=0;
	cout<<"The Even numbers between 0 and 20 are:\n\n\t";
	for ( ; num<=20 ; num=num+2 )
	{
		
		cout<<num<<"\n\t";
		
	}
	
	_getch();
	return 0;


}