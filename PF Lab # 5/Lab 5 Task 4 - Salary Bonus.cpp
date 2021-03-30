#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int salary = 0;
	cout<<"Enter salary of user : ";
	cin>>salary;

	if(salary >= 40000){
		salary *= 1.05;
	}
	else
	{
		salary *= 1.10;
	}

	cout<<"New salary = "<<salary<<endl;
	_getch();
}