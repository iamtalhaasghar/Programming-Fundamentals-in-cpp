#include<iostream>
#include<conio.h>

using namespace std;

const int s=15;

int main()
{

	int num=0;
	int total_dig=0,i=0;
	int arr[s]={0};
	
	int c_num=0;
	bool result=0;

	cout<<"? ";
	cin>>num;

	c_num=num;

	for( i=0 ; c_num>0 ; i++	)
	{
		c_num/=10;
	
	
	}
	
	total_dig=i;
	cout<<"\nDigits="<<total_dig<<endl;
	
	c_num=num;

	for(i=total_dig-1; i>=0 ; i--)
	{
		arr[i]=c_num%10;
		c_num/=10;
	
	}

	for(i=0 ; (i<total_dig) ; i++)
	 {
		

		 if(!(arr[i]==arr[total_dig-1]))
		 {
		 
			 result=0;
			break;
		 }
		 else if( arr[i]==arr[total_dig-1] )
		 {
				result=1;
	
				
		 }

		total_dig--;
	
	}


	if(result==1)
		cout<<"\nPalindrome";
	else
		cout<<"\nNot Palindrome";

	cout<<"\nEnd";




	_getch();

}