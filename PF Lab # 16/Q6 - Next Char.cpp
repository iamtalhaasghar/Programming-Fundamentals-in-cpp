#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char ch='0';

	cout<<"? ";
	cin>>ch;

	cout<<"Next Character is : "<<static_cast<char>(ch+1);


	_getch();

}