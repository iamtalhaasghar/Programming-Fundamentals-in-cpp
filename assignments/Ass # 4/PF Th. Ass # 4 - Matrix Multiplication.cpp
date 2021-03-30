

					//	Program to Multiply two Matrices


// TALHA ASGHAR
***REMOVED***
// ***REMOVED*** # 4



					// Libraries to include

#include<iostream>
#include<conio.h>

using namespace std;


const int max_size=5;			// a constant "max_size" of type int initialized to 5


/*******************************************************************
		PROTOYPES OF FUNCTIONS TO BE USED
********************************************************************/

	// Function to read elements of a matrix from keyboard
void read_matrix (int matrix[max_size][max_size] , int r, int c);			
	
	// Function to print elements of a matrix
void print_matrix (int matrix[max_size][max_size] , int r, int c);

	// Function to determine the product of given two matrices
void matrix_product (int matrixA[max_size][max_size], int matrixB[max_size][max_size] ,int matrixC[max_size][max_size], int r1, int c1, int r2, int c2);


/****************************************************************************************************/



					// the function "main"

int main (void)

{
	
	int r1=0,c1=0;		// rows and columns of 1st matrix 
	int r2=0,c2=0;		// rows and columns of 2nd matrix


	int matrix1[max_size][max_size]={};			// declaration and initializing 1st matrix

	int matrix2[max_size][max_size]={};			// declaration and initializing 2nd matrix

	int matrix[max_size][max_size]={};			// declaration and initializing matrix to store result of product

***REMOVED***";
	cout<<"\n\n\t\t\"Program to Multiply two Matrices\"\n\n\n";



			// getting the number of rows and columns of 1st matrix from user
	cout<<"\nEnter the Number of Rows of 1st Matrix : ";
	cin>>r1;
	cout<<"\nEnter the Number of Columns of 1st Matrix : ";
	cin>>c1;
	

			// getting the number of rows and columns of 2nd matrix from user
	cout<<"\n\n\nEnter the Number of Rows of 2nd Matrix : ";
	cin>>r2;
	cout<<"\nEnter the Number of Columns of 2nd Matrix : ";
	cin>>c2;

	cout<<"_______________________________________________________________";


	if(c1==r2)			// check if multiplication is possible or not
	
	{
			
				// get the data of matrix 1 from user
		cout<<"\n\nPlease Enter the Elements of 1st Matrix  : \n";

		read_matrix(matrix1,r1,c1);			// calling function "read_matrix"
	

		cout<<"_______________________________________________________________";

				// get the data of matrix 2 from user
		cout<<"\n\nPlease Enter the Elements of 2nd Matrix : \n";

		read_matrix(matrix2,r2,c2);			// calling function "read_matrix"


					// calling function "matrix_product"
		matrix_product(matrix1,matrix2,matrix,r1,c1,r2,c2);


		cout<<"_______________________________________________________________";



					// print result of multiplication of two matrices
		cout<<"\n\nMultiplication of Matrices is given below  : \n\n\n";

		print_matrix(matrix,r1,c2);			// calling function "print_matrix"
	
	}
	
	else		// if not print this message
	{
		
		cout<<"\n\nThe Multiplication of Given Matrices is not possible.!\n\a";
	
	}
	getch();

}						// end of body of "main"




/***************************************************************
	
	DEFINATIONS OF FUNCTIONS USED IN THE PROGRAM

****************************************************************/


	// function "read_matrix" to read the entries of a matrix from user through keyboard

void read_matrix (int matrix[max_size][max_size] , int r, int c)
{
	

	for (int i=0; i<r ; i++ ) 
	{
		for (int j=0 ; j<c ; j++)
		{
			cin>>matrix[i][j];			// store the data typed to "matrix[i][j]"
		

		}			// end of nested for loop
	
	}				// end of outer for loop


}		// End of Function "read_matrix"




	// function "print_matrix" to print a matrix
	
void print_matrix (int matrix[max_size][max_size] , int r, int c)
{
	


	for (int i=0; i<r ; i++ ) 
	{
		for (int j=0 ; j<c ; j++)
		{
			cout<<matrix[i][j]<<"\t";		// print the data stored in "matrix[i][j]"
		
		}
		
		cout<<"\n\n";
		
	}

}				// end of function "print_matrix"



	// function "matrix_product" to multiply two matrices

void matrix_product (int matrixA[max_size][max_size], int matrixB[max_size][max_size] ,int matrix[max_size][max_size], int r1, int c1, int r2, int c2)
{




	if (c1!=r2)				// if multiplication is not possible print this message
	{
		cout<<"\n\nThe Multiplication of Given Matrices is not possible.!\n\a";
	}
	else					// else calculate the product of given two matrices
	{
	
		for (int i=0; i<r1; i++)
		{
			
			for(int j=0 ; j<c2 ; j++)
			{

				matrix[i][j]=0;			// initialize "matrix[i][j]" to zero

				for(int k=0 ; k<c1 ; k++)
				{
					matrix[i][j]+=matrixA[i][k]*matrixB[k][j];
					
				}		// inner most for loop
			
			
			}			// central for loop	

		}				// outer most for loop
		

	}			// end of body of else statement		
			


}					// end of function "matrix_product"
	

















