#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int start_num=0, end_num=0;
	int even=0, sum=0;
	
	cout<<"Please Enter starting number: ";
	cin>>start_num;
	cout<<"Please Enter Ending number: ";
	cin>>end_num;
	
	cout<<"\n\n\n\n";


	if	((start_num%2==1)&&(end_num==start_num))
	{cout<<"No Even numbers in this Range.\n";}	
	else
	{
			
		if( start_num%2==1 )
			even=start_num+1;
		else
			even=start_num;
	
		for (; even<=end_num ;  )
		{
			
			
			sum+=even;
			cout<<"The Sum of Even numbers upto "<<even<<" is "<<sum<<" \n";
			even+=2;	
		
		}			
	
		cout<<"The Sum of all Even numbers between "<<start_num<<" and "<<end_num<<" is "<<sum<<" \n\n\n";
	
	}
	
	cout<<"Program completed Successfully!";
	
	_getch();
	return 0;
	
}  