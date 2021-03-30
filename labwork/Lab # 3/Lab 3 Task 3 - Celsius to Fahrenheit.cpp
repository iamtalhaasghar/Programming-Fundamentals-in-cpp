//Conversion of Temprature from Degree Celcius to Degree Farhenheit.

#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	float t_c, t_f;
	cout<<"Please Enter the Temprature in Deegre Celcius:\t";
	
	cin>>t_c;
	
	t_f	= (9.0/5.0) * t_c + 32;
	
	cout<<"The Equivalent Temprature of "<<t_c<<" in Farhenheit is "<<t_f<<"\n";
	
	_getch();
	 
}
