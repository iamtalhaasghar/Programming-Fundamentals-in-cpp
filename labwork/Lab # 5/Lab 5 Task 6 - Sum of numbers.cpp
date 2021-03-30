#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int sum = 0;
	int total = 0;
	for (int i = 1; i <= 10; i++)
	{
		total += i;
		
		if(i%2){

			sum += i;
			cout<<"\nSum of all odd numbers upto "<<i<<" is : "<<sum;
			cout<<"\nSum of all numbers upto "<<i<<" is : "
				<<total<<endl;
		}

	}
	
	_getch();
}