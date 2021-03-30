#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num;
	cout<<"Enter a number : ";
	cin>>num;

	if (num%8==0 && num%13==0)
	{
		cout<<"The number is divisible by 8 and 13.\n";
	}
	else
	{
		cout<<"The number is not divisible by 8 and 13.\n";
	}
	
	_getch();
}