#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){

	int num1, num2;
	cout<<"Enter two numbers : ";
	cin>>num1>>num2;

	cout<<setw(25)<<"Addition : "<<num1+num2<<endl;
	cout<<setw(25)<<"Multiplication : "<<num1*num2<<endl;
	cout<<setw(25)<<"Division : "<<num1/num2<<endl;
	cout<<setw(25)<<"Remainder : "<<num1%num2<<endl;
	cout<<setw(25)<<"Subtraction : "<<num1-num2<<endl;

	_getch();
}