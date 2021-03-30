
								// function to convert a binary number into its decimal equivalent

#include<iostream>
#include<conio.h>

using namespace std;

											// prototypes of function to be used


int digit_counter(int num);

int decimal(int num);




int main()
{

	int b_number = 0;

	cout << "\n\n\t\"Program to convert binary number to its decimal equivalent\"\n\n\n\n";

	cout << "Enter any Binary Number : ";
	cin >> b_number;

	cout << "\n\n The decimal equivalent of given number is: " << decimal(b_number);


	_getch();

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


int decimal(int num)
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








