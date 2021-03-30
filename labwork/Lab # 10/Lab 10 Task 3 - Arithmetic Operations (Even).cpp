#include<iostream>
#include<conio.h>

using namespace std;

void cube(int&);
void subtract(int&);
void calculate(int&, int&, int&);

int main(){

	int x = 0;
	int y = 0;
	int z = 0;

	cout<<"Enter a number : ";
	cin>>x;
	
	cout<<"Cube of "<<x<<" : ";
	cube(x);
	cout<<x<<"\n\n";

	cout<<"Subtracting 3 from "<<x<<" gives : ";
	subtract(x);
	cout<<x<<"\n\n";

	cout<<"Before Calculation : \n"
		<<"x : "<<x<<"\ny : "<<y<<"\nz : "<<z<<endl;

	calculate(x, y, z);

	cout<<"After Calculation : \n"
		<<"x : "<<x<<"\ny : "<<y<<"\nz : "<<z<<endl;


	_getch();
}

void cube(int& num){
	num = num * num * num;
}

void subtract(int& num){
	num -= 3;
}

void calculate(int& a, int& b, int &c){
	a = 9 + 7 * a;
	b = 2 * a - 3;
	c = 10 * a - (2 * a * 7);
}
