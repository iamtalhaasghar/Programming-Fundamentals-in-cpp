
#include<iostream>
#include<conio.h>
#include<fstream>
#include <string>

using namespace std;

int main()
{
	fstream myfile;

	char name[50];


	myfile.open("name.txt", ios::app);


	if (!myfile.is_open())
	{
		cout << "Error in opening file!\n";
	}
	else
	{
		cout << "Enter something to write to file : ";
		cin >> name;

		myfile << name;	
		
	}
	myfile.close();
	
	myfile.open("name.txt", ios::in);

	while (!myfile.eof())
	{
		myfile >> name;
		cout << endl << name;
	
	}
	
	myfile.close();

	_getch();

}