
// libraries to include

#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;


bool isPrime(int);



int main(void)
{
	int number = 0;
	
	cout << "\n\nEnter a number : ";
	cin>>number;
	
	cout << "\n\nIs Number Prime : "<<boolalpha <<isPrime(number);
	
	_getch();
	return 0;

}

bool isPrime(int n){

	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n%2==0){
			return false;
		}
	}
	return true;
}