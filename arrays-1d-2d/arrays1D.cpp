#include <iostream>
#include <time.h>   // For time() to seed srand()
#include <stdlib.h> // For rand() and srand()
using namespace std;

/*
    Arrays is a collection of the same data type. 1 array would always have the same size throughout the program

    Declaration Syntax:
    <datatype> arrayName[arraySize]; where arraySize is always an integer & constant literal / identifier

    C++ allows you to omit the array size, example: int myList[] = {69, 9, 3, 13} *C++ automatically figures out how many elements are in
    the array*
*/
int main()
{
    srand(time(0)); // This is needed so that the rand() function creates a random set of values everytime
    /* int size = 4;
    int myList[size]; // This is the wrong method for cpp
    // const int size = 3;
    // double marks[size]; // This is the correct method
    // Adding elements individually to an array
    // marks[0] = 10; // 0 represents the first index (slot) for an array
    // marks[1] = 25;
    // marks[2] = 78; // Going upto 2, our 3 slots are now completed and used
    // cout << marks[2] << " " << marks[0] << " " << marks[1];
    */

    // Adding elements to an array through LOOPS
    /* int marks[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    for (int j = 0; j < 5; j++)
    {
        cout << "Marks for student " << j + 1 << ": " << marks[j] << endl;
    }
    */

    // When an array is created, its elements are assigned with arbitrary (auto-assigned) values.
    /* int myList[10];
    for (int i = 0; i < 10; i++)
    {
        cout << myList[i] << endl;
    }
    */

    // Declaring, creating, initializing in one step:
    /* int myList[5] = {32, 11, -6, 65, 10}; */

    // Partial initialisation:
    /* double myList[4] = {1.9, 4.65}; This example assigns values 1.9, 4.65 to the first two elements of the array, other two elements
    will be set to zero */

    // Initialising arrays with random values:
    /* int myList[10];
    for (int i = 0; i < 10; i++)
    {
        myList[i] = rand() % 100; rand() % 100 means it'll generate a value between 0 - 99, we add 1 to the entire expression to make
        it 1 - 100
        cout << "Element " << i + 1 << ": " << myList[i] << endl;
    }
    */

    // Copying array elements to another array:
    /*
    int List1[5] = {5, 22, 89, -4, 10};
    int List2[5];

    for (int i = 0; i < 5; i++)
    {
     List2[i] = List1[i];
     cout << List2[i] << endl;
    }
    */

    // Declaration of C-strings / Character arrays:
    /*
    char name[30]; // no initialization
    char title[20] = "Hello World"; // Initialised at declaration with a string, rest of the elements will be empty ('')
    char chList[6] = {'H', 'e', 'l', 'l', 'o'}; // initialised with list of char values. The extra space is for the null character ('\0'),
    which is automatically added by the compiler. This is why the size of the array is 6, even though there are only 5 visible characters
    being assigned to it.

    for (int i = 0; i < 20; i++)
    {
        cout << "Element " << i + 1 << ": " << title[i] << endl;
    }

    for (int j = 0; j < 6; j++)
    {
        cout << "Element " << j + 1 << ": " << chList[j] << endl;
    }
    */

    // Q1 - Write a program to create an array of 100 elements, assign each element with the same value (its index uses). Sum all the array
    // values and print the Sum.
    /*
    int arr[100];
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = (rand() % 100) + 1;
        sum = sum + arr[i];
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
    cout << "Sum: " << sum << endl;
    */

    // Q2 - Write a program to create an array of 10 elements, assign each element a random value (1 to 50). Print the array
    // values. Then, Reverse the values stored in array. Output the final array values.
    /*
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = (rand() % 50) + 1;
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
    cout << endl;
    // Reversing the array
    for (int i = 0, j = 9; i < j; i++, j--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
    */

    // Q3 - Write a program that creates an integer array having 5 elements. Then, ask the user to input values in the array.
    // After that, find the largest number, smallest number in the and calculate the average of the values in the array.
    /*
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
        sum = sum + arr[i];
    }

    int largest = -999;
    int smallest = 999;

    for (int j = 0; j < 5; j++)
    {
        if (arr[j] > largest) {
            largest = arr[j];
        }
        if (arr[j] < smallest) {
            smallest = arr[j];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Average: " << float(sum / 5) << endl;
    */

    //  Q4 - Write a program that creates an integer array having 100 elements. Then, randomly assign values (0—99) to
    // the arrays elements. After that the program should ask the user to enter a number and print the total number
    // of occurrences (how many time the number appeared) in the array.
    /*
    int arr[100];

    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
    }

    int numChoice;
    int count;

    cout << "Enter which number you'd like to find: " << endl;
    cin >> numChoice;

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] == numChoice) {
            count = count + 1;
        }
    }

    cout << "Item was found " << count << " times" << endl;
    */

    // Q5 - Write a program to create an array of 50 elements, initialize each element random value (1 to 100). Find the location
    // (index) of the value entered by user. In the end, print both the index and its value.
    /*
    int arr[50];

    for (int i = 0; i < 50; i++)
    {
        arr[i] = (rand() % 100) + 1;
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    int indexLocation;
    int SearchVal;
    bool found = false;

    cout << "Enter the value you'd like to find: ";
    cin >> SearchVal;

    for (int i = 0; i < 50; i++)
    {
        if (arr[i] == SearchVal) {
            indexLocation = i;
            found = true;
        }
    }
    
    if (found == true) {
        cout << "Your value (" << SearchVal << ") was found at index location " << indexLocation << endl; 
    }
    else {
        cout << "Your value does not exist in the array." << endl;
    }
    */

   // Bubble sorting (Ascending)
   int arr[10] = {33, 10, 1, 87, 6, 44, 23, 3, 11, 82};
    int i, j, temp;
    int iterations = 10;

    for (i = 0; i < iterations; i++)
    {
        for (int j = 0; j < iterations - 1 - i; j++)
            if (arr[j] > arr[j + 1]) // For descending just change this sign to '<'
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
}