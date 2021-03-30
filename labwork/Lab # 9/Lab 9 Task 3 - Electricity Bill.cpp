

					//Program to Calculate Electricity bill of given units


// libraries to include

#include<iostream>
#include<conio.h>


using namespace std;


int bill(int);        // prototype of function "bill"



int main(void)
{
	int unit = 0, result = 0;
	
	cout << "\n\n\t\"Program to Calculate Electricity bill of given units\"\n\n\n";
	
	cout << "\n\nEnter units consumed: ";
	
	cin >> unit;
	
	result = bill(unit);                   //calling function bill
	
	cout << "\n\nTotal Bill is : " << result;
	
	_getch();
	return 0;

}

// defination of function bill to calculate bill


int bill(int units){
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