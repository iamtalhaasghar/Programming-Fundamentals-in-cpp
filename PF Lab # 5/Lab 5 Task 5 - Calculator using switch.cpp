#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
	
	int num1 = 0;
	int num2 = 0;
	char operation = '\0';

	cout<<setw(35)<<"My calculator"<<endl;
	cout<<"? : ";
	cin>>num1>>operation>>num2;

	switch (operation)
	{
		case '+':
			cout<<"Addition : "<<num1+num2;
			break;
		case '*':
			cout<<"Multiplication : "<<num1*num2;
			break;
		case '/':
			cout<<"Division : "<<num1/num2;
			break;
		case '-':
			cout<<"Subtraction : "<<num1-num2;
			break;
		case '%':
			cout<<"Remainder : "<<num1%num2;
			break;

		default:
			cout<<"\nInvalid Operator entered.\n";
			break;
	}


	
	_getch();
}