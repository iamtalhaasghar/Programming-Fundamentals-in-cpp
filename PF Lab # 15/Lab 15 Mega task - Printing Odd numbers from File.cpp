

					// get and write numbers to a file "odd.txt" and print only odd numbers


// libraries used in program

#include<iostream>
#include<conio.h>
#include<fstream>		// library to manipulate files "files_stream"

using namespace std;


int main()
{

	fstream myfile;			// creating object "myfile" to handle files

	int num=0;				// store numbers entered by user
	
	int size = 0;			// total numbers user wants to enter .i.e. 3 numbers or 5 numbers etc

	// opening file in output mode to write data to file

	myfile.open("odd.txt", ios::out);			


	// check if file opened correctly

	if (!(myfile.is_open()))
	{
		cout << "Error in opening file!\n";
	}

	else   // if opened do this thing
	{
					
		// get choice of user
	
		cout << "Total Numbers you want to save : ";
		
		cin >> size;					// save choice to "size"



		// reading numbers from keyboard

		cout << "\n\nPlease Enter the numbers to save in file :\n\n";
		
		for (int i=0 ; i<size; i++)
		{
			cin >> num;
			myfile<<endl<< num;			// save data to file


		}			// end of for loop

	
		myfile.close();			// close file from output mode


								// again open file in read mode
		myfile.open("odd.txt", ios::in);	

		
		
		
		// read numbers from file and print odd ones 

		cout << "\nOdd numbers are: \n\n";
		

		// read file unless "end of file is reached"

		while (!myfile.eof())		
		{
			myfile >> num ;			// read data from file
			
			if (num % 2 == 1)			// check if number is odd
				cout << num<<endl;


		}	// end of for loop 

	
	}			// end of else`s body 


	_getch();

}				// end of body of main