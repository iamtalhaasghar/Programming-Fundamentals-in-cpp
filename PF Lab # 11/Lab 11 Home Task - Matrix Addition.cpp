
// program to add two matrices

// lab 11 Home Task
// Talha Asghar
// CS-172069


// Libraries to include

#include<iostream>
#include<conio.h>

#define SIZE 100


using namespace std;

int main()
{

	int rows, columns;    // variables to store numbers of rows and columns

	cout << "\n\n\n\t\t\t \"Program to add two maatrices\"\n";

	// getting number of rows from user
	cout << "\nEnter the number of Rows : ";
	cin >> rows;

	// getting number of columns from user
	cout << "\nEnter the number of Columns : ";
	cin >> columns;



	// initializing array of matrix A, matrix B and sum
	int A[SIZE][SIZE], B[SIZE][SIZE], sum[SIZE][SIZE];




	// loop to get elements of matrix A

	cout << "\nEnter elements of 1st Matrix : \n\n";

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j< columns; j++)

			cin >> A[i][j];

	}



	// loop to get elements of matrix B

	cout << "\nEnter Elements of 2nd Matrix : \n\n";

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j< columns; j++)

			cin >> B[i][j];

	}

	system("cls");

	// displaying matrix A

	cout << "\nElements of 1st Matrix \n\n";
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j< columns; j++)

			cout << A[i][j] << "\t";
		cout << endl;
	}

	//	displayong matrix B

	cout << "\nElements of 2nd Matrix \n\n";

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j< columns; j++)

			cout << B[i][j] << "\t";
		cout << endl;
	}


	//	calculating sum of elements of matrix A and B

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j< columns; j++)

			sum[i][j] = A[i][j] + B[i][j];

	}


	// displaying resultant matrix sum

	cout << "Resultant Matrix is \n\n";
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j< columns; j++)

			cout << sum[i][j] << "\t";
		cout << endl;
	}


	getch();
}