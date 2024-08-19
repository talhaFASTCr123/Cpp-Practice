#include <iostream>
using namespace std;

/* 2 dimensional arrays:
    Syntax for declaration: arr[rows][cols], these rows & cols must be entered otherwise a 2D array is not declared (unlike 1d arrays)
    - All array elements must be of the same type
    - Total locations are (rows * cols)

    Passing arguments to functions:
    1. Pass-by-value
    2. Pass-by-reference with reference arguments (Arrays naturally get passed by reference so we don't need the '&' sign before them)
    3. Pass-by-reference with pointer arguments
*/

void AddGraceMarks(int marks) {
    cout << "Actual marks: " << marks << endl;
    marks += 10;
    cout << "Marks have been updated to: " << marks << endl;
}

void AddGraceMarks2(int &marks) {
    cout << "Actual marks: " << marks << endl;
    marks += 10;
    cout << "Marks have been updated to: " << marks << endl;
}

int main() {
    // int rows = 3;
    // int cols = 3;
    // int data[rows][cols] = 
    // { // 2D array with 3 rows and 3 columns
    //     {1, 2, 3}, // First row where first column contains 1, second column contains 2 and 3rd contains 3
    //     {4, 5, 6}, // 1st index row where 0th index column contains 4, 1st index column contains 5, 2nd index column contains 6
    //     {7, 8, 9} // 2nd index row where 0th index column contains 7, 1st index column contains 8, 2nd index column contains 9
    // };

    // cout << "First row, Third column: " << data[0][2] << endl;
    // cout << "Third row, Third column: " << data[2][2] << endl;

    // int temp[][3] = 
    // { // We can also leave the rows empty so the compiler itself can calculate how many rows the array has
    //     {50, 70, 60}, 
    //     {48, 75, 62}, 
    //     {51, 69, 60}, 
    //     {52, 78, 63}
    // };

    // // Looping through a 2D array
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << "value: " << data[i][j] << ", row " << i + 1 << ", column " << j + 1 << endl;
    //     }
    // }

    /* Q1: Compute the average value  of a matrix with n rows and m columns */
    // float avg;
    // float sum;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         sum = sum + data[i][j];
    //     }
    // }
    // avg = sum / (rows * cols);
    // cout << "Average: " << avg << endl;
    
    /* Q2: Compute the average value of the 3rd row of a 2D array with r rows and c columns. */
    // float avg;
    // float sum;
    // for (int i = 0; i < cols; i++)
    // {
    //     sum = sum + data[2][i];
    // }
    // avg = sum/(3);
    // cout << "Average for 3rd row: " << avg << endl;

    /* Q3: Write a program to that creates a matrix of size 5 by 5 (5 Columns, and 5 Rows). The program should ask the user to enter
    values in each matrix element. Then the program should display the matrix column-wise. */
    // int rows = 5;
    // int cols = 4;
    // int data[rows][cols] = 
    // {
    //     {1, 2, 3, 4, 5},
    //     {6, 7, 8, 9, 10},
    //     {11, 12, 13, 14, 15},
    //     {16, 17, 18, 19, 20},
    //     {21, 22, 23, 24, 25}
    // };
    // for (int j = 0; j < cols; j++)
    // {
    //     for (int i = 0; i < rows; i++)
    //     {
    //         cout << "Value: " << data[i][j] << ", Row: " << i + 1 << ", Column: " << j + 1 << endl;
    //     }
        
    // }

    /* Q4: Write a program to that creates a matrix of size 5 by 5 (5 Columns, and 5 Rows). Then the program should display the
    diagonal elements of the matrix. */
    
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (i == j) {
    //             cout << "Value: " << data[i][j] << ", Row: " << i + 1 << ", Column: " << j + 1 << endl;
    //         }
    //     }
        
    // }

    /* Q5: Write a program that creates a matrix of 3 by 3 (3 rows, and 3 coulmns). Get input values from the user for the complete
    matrix. Then, the program should determine whether the matrix is a “Zero” matrix (all elements are zero) or not.*/
    // int rows = 3;
    // int cols = 3;
    // int matrix[3][3];
    // int zeroCount = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << "Enter values for the matrix: ";
    //         cin >> matrix[i][j];
    //         if (matrix[i][j] == 0) {
    //             zeroCount = zeroCount + 1;
    //         }
    //     }
    // }
    // if (zeroCount == (rows*cols)) {
    //     cout << "Matrix is a zero-matrix";
    // }
    // else {
    //     cout << "Matrix is a non-zero-matrix";
    // }

    /* Pass-by-Value */
    int marks = 75;
    AddGraceMarks(marks); // A copy has been passed, therefore the original variable marks in this scope hasn't been changed
    cout<<"Your marks are: " << marks << endl;
    cout << endl;
    marks = 75;
    AddGraceMarks2(marks); // The original value has been passed, therefore the original has been changed as well
    cout<<"Your marks are: " << marks << endl;


    return 0;    
}