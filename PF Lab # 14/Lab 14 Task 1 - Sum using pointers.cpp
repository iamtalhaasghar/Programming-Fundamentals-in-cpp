#include<iostream>
#include<conio.h>
#include<iomanip>


using namespace std;
int main()
{
	int num1=0, num2=0;
	int *n1=NULL,*n2=NULL;
	
	int sum=0;
	int *s=NULL;


	cout<<setw(40)<<"\"Sum using Pointers\"\n\n";

	
	n1=&num1;
	n2=&num2;
	s=&sum;

	



	cout<<"Enter first number: ";
	cin>>num1;


	cout<<"Enter second number: ";
	cin>>num2;


	*s=*n1+*n2;


	cout<<"\n\nSum is : "<<*s;
	cout<<"\n\n\n";
	system("pause");

}