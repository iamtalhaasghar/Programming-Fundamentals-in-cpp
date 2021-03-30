#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1;
	float num2;
	char character;
	char name[20];
	
	cout<<"Please Enter Your Name.\n";
	cin>>name;
	cout<<"Computer is going to check your Screen\n that whether it is Ready for Operation or not.\n" <<"Please \"Enter\" any Number\n";
	cin>>num1;
	cout<<"Now, Enter any Number with Decimal Point\n";
	cin>>num2;
	cout<<"Now, Please Enter the First Letter of your Name\n";
	cin>>character;
	
	cout<<"\n HI!\n"<<name<<"!\n\nThis is the Number you Entered.\n"<<num1<<"\nThis is the Number you Entered with Decimal Point.\n";
	cout<<num2<<"\nAnd Of Course the First Letter of your Name.\n";
	cout<<character<<"\n\n\n"<<"Your Monitor is Working Properly.\nEverything is Perfect!\nYou are ready to go!";
		getch();
}

