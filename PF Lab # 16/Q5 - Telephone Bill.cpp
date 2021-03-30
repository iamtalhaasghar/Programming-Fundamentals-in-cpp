#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int call=0;
	int net=0;

	cout<<"? ";
	cin>>call;

	if ((call>0) && (call<=100))
	{
		net=200;
	}
	else if (call>100 && call<=150)
	{
		net=((call-100)*0.6)+200;
	
	}
	else if (call>150 && call<=200)
	{
	
		net=((call-150)*0.5)+((call-100)*0.6)+200;
	
	}
	else if (call>200)
	{
	
		net=( (call-200)*0.40)+((call-150)*0.5)+((call-100)*0.6)+200;
	
	}



	cout<<"\nTotal Bill is : "<<net<<endl;


	_getch();

}