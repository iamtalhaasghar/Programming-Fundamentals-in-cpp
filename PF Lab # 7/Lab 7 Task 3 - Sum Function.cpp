#include <iostream>
#include <conio.h>
using namespace std;


void credit ()
{
	cout<<"Programing By: ***REMOVED***\n\t\"Computer Scientist\"\n";
	cout<<"............................\n\n\n";


}


void sum (int a, int b )
{

	cout<<"\nSum is = "<<a+b<<endl;

}


void multiply (int a, int b )
{

	cout<<"\nProduct is = "<< a * b <<endl;

}


int main(void)
{
	system("cls");
	credit();
	
	int x=0,y=0;
	
	cout<<"Please Enter 1st number: ";
	cin>>x;

	
	cout<<"Please Enter 2nd number: ";
	cin>>y;

	sum(x,y);

	multiply(x,y);

	

	_getch();

}