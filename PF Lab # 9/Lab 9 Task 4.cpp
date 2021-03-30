#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

bool isPrime(int n){

	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n%2==0){
			return false;
		}
	}
	return true;
}

	// function to count the number of digits in entered numbers

int digit_counter(int num)
{

	int count = 0;

	for (; num>0; count++)
	{
		num /= 10;

	}

	return count;

}


	// function to convert the binary number into decimal number 


int binaryToDecimal(int num)
{

	
	int digits = digit_counter(num);    // no of digits in entered binary number.
	
	int decimal_num = 0;				// variable to store the converted decimal number
	
	int multiplier = 1;					// multiplier to convert the binary number in decimal number
	
	for (int i = 0; i<digits; i++)
	{

		decimal_num += (num % 10)* multiplier;

		num /= 10;
		
		multiplier *= 2;		// multiplying multiplier by 2 and storing it in multiplier

	}

	return decimal_num;

}


int calculateBill(int units){
	int total = 0;
	int temp = 0;
	if(units<=50){
		total = units * 0.5;
	}
	else if(units>50 && units<=150){
		total = 0.5 * 50;
		temp = units - 50;
		total += temp * 0.75;
	}
	else if(units>150 && units <=250){
		total = 0.5 * 50;
		total += 100 * 0.75;
		temp = units - 150;
		total += temp * 1.2;
	}
	else if(units>250){
		total = 0.5 * 50;
		total += 100 * 0.75;
		total += 100 * 1.2;
		temp = units - 250;
		total += temp * 1.5;
	}

	int charge = total * 0.2;
	total += charge;
	return total;
}

int main(){

	int choice = 0;
	cout<<"\n\nMain Menu : \n\n"
		<<"1) isPrime()\n"
		<<"2) binaryToDecimal()\n"
		<<"3) calculateBill()\n\n";

	cout<<"Select a choice : ";
	cin>>choice;

	switch (choice)
	{
	case 1:
		cout<<"Enter a number : ";
		cin>>choice;
		cout<<"Is Number Prime : "<<boolalpha<<isPrime(choice)<<endl;
		break;
	case 2:
		cout<<"Enter a binary number : ";
		cin>>choice;
		cout<<"Decimal Equivalent : "<<binaryToDecimal(choice);
		break;
	case 3:
		cout<<"Enter total number of units consumed : ";
		cin>>choice;
		cout<<"Total Bill = "<<calculateBill(choice);
	default:
		break;
	}


	_getch();
}
