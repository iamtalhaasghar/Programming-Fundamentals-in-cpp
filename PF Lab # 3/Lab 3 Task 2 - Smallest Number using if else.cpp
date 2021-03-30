			//Smallest number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1, num2, num3;
	
	cout<<"Please Enter 3 Numbers and press \"Enter\" after each entry:\n";
	cin>>num1>>num2>>num3;
	
	if (num1<num2)
	
	{
		if (num1<num3)
		cout<<"The Number "<<num1<<" is the smallest number.\n";
		else
			cout<<"The Number "<<num3<<" is the smallest number.\n";
	}
	
	else
		{
			if (num2<num3)
			cout<<"The Number "<<num2<<" is the smallest number.\n";
			else
				cout<<"The Number "<<num3<<" is the smallest number.\n";
		}
	getch();

}