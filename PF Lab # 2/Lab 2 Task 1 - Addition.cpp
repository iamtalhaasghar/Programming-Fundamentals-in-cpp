#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int number1, number2, sum;
	cout<<"Please Enter the \"First Number\" and press \"Enter\" to continue.\n";
	cin>>number1; 
	cout<<"Please Enter the \"Second Number\" and press \"Enter\" to continue.\n";
	cin>>number2;
   sum= number1 + number2;
	cout<<"The Sum of\t"<<number1<<"\tand\t"<<number2<<"\tis\n\t"<<sum;
	getch();
}



