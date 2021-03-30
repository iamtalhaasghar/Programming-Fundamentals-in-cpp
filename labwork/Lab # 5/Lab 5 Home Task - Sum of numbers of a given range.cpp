#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int start = 0;
	int end = 0;
	int sum  = 0;
	int total = 0;
	
	do{
		cout<<"Enter starting number : ";
		cin>>start;
		cout<<"Enter ending number : ";
		cin>>end;
	}while(start>end);
	
	for (int i = 1; i < start; i++)
	{
		total += i;
		if(i%2)
			sum += i;
	}
	
	for (int j = start; j <= end; j++)
	{
		total += j;
		if(j%2){
			sum += j;
			cout<<"\nSum of all odd numbers upto "<<j<<" is : "<<sum;
			cout<<"\nSum of all numbers upto "<<j<<" is : "
				<<total<<endl;
		}
	}

	_getch();
}