#include<iostream>
#include<conio.h>
#define SIZE 100
using namespace std;

int main(){
	
	int matrixA[SIZE][SIZE] = {0};
	int matrixB[SIZE][SIZE] = {0};
	int resultant[SIZE][SIZE] = {0};

	int rows = 0;
	int columns = 0;
	cout<<"Enter number of Rows : ";
	cin>>rows;
	cout<<"Enter number of Columns : ";
	cin>>columns;

	cout<<"\n\nEnter elements of Matrix A : \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cin>>matrixA[i][j];
		}
	}
	
	cout<<"\n\nEnter elements of Matrix B : \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cin>>matrixB[i][j];
		}
	}

	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			resultant[i][j] = matrixA[i][j] + matrixB[i][j]; 
		}
	}
	
	cout<<"\n\nThe sum of matrices is : \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout<<resultant[i][j]<<"\t";
		}
		cout<<endl;

	}

	_getch();
}