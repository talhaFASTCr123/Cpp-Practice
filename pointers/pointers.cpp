#include <iostream>
using namespace std;

/* Pointers:
    - When we declare a variable, some memory slot is allocated for it, thus we have its Address & its Data Value
    - Pointers allow us to get the memory address of a variable. Syntax: int x = 4, &i --> will return memory location where data value
    for 'i' is stored
    - A pointer is basically a variable that only stores address
    - Syntax for creating pointer variable: <data_type>* <variable_name>;

   Static & Dynamic Memory Allocation:
    - Dynamic allocated memory is kept on the memory heap (AKA free store)
    - Dynamic allocated memory cannot have a 'name', it must be referred to using memory addresses
    - *Declarations* are used to statically allocate memory
    - The *new* operator is used to dynamically allocate memory (AKA take memory from heap)
    - The *delete* operator is used to return the memory to heap. NOTE: It does not delete the pointer or contents in the data and the pointers still hold the address of the memory (dangling pointers)
    - In order to solve the above problem, we make sure to set the pointer to NULL (or 0) to avoid dangling pointers
    - Summary: *new* takes memory from heap, *delete* deletes content in that heap memory location, *NULL* removes pointer access to that memory location

   Pointers Data-Type:
   - All memory addresses are of same length, however compiler needs to know data type of pointer variable to jump x byte memory locations
   - E.g. if 'p' is a character-pointer then 'p++' will increment 'p' by one byte to the next location
   - E.g. if 'p' is an integer-pointer then 'p++' will increment 'p' by four bytes to the next location

   Arrays & Pointers:
   - Array name is like a constant pointer, all array elements are placed in consecutive locations
   - E.g. int List[10] means List itself points at the address of first element in array
   - We can also access array elements using pointers

   Pointer arithmetics (Operations regarding memory address basically):
   - Only two types of operations are allowed: integer addition, integer subtraction
   Valid / Invalid operations:
   - pointer + integer (ptr + 1) is VALID
   - integer + pointer (1 + ptr) is VALID
   - pointer + pointer (ptr + ptr) is INVALID
   - pointer - integer (ptr - 1) is VALID
   - integer - pointer (1 - ptr) is INVALID
   - pointer - pointer (ptr - ptr) is INVALID because you cannot add two memory addresses together
   - pointer to pointer comparison (ptr == ptr) is VALID
   - pointer to integer comparison (1 == ptr) is INVALID
   - pointer to 0 / NULL comparison (0 / NULL == pointer) is VALID

   Comparing pointers (C++ relational operators):
   - Relational operators: <, >, <=, >=, ==
   - These comparisons are basically done for memory addresses too, e.g. address of arr[2] will be smaller than
    address of arr[3]

   Void Pointers:
   - void* is a pointer to no type at all, any pointer type maybe be assigned to void*
   - But, there are some limitations / challenges:
        int iVar= 5;
        float fVar= 4.3;
        char cVar= ‘Z’;
        int* p1;
        void* vp2;
        p1 = &iVar; // Allowed (p1 is an integer type so it can only point to integer data types)
        p1 = &fvar; // Not Allowed
        P1 = &cVar; // Not Allowed
        vp2 = &fvar; // Allowed (vp2 is a void type so it can point to any data type)
        vp2 = &cVar; // Allowed
        vp2 = &iVar; // Allowed 

   Arrays in relation to pointer:
   - Accessing 1D array through pointers (code below)
   - Accessing / traversing 2D array through pointers (code below)

   Casting pointers:
   - Pointers have types, so you cannot point a pointer to each other of *different* data-types
   - C++ will let you change the type of pointer with *explicit cast*
   - int* pInt; double* pDouble;
    pDouble = (double*) pInt // Pointing pDouble (alias) to memory location that pInt (now a data-type of double) is pointing to
   - Warning: Values dereferenced after the cast are undermined (because of possible difference in memory size)

   Dynamic 2D arrays:
   1) Using a single pointer:
    - Total elements in a 2D array: (rows * cols) so e.g. 5 * 4 = 20 elements
    - Target approach would be allocating 20 elements (from heap) using dynamic allocation
    - Then use a single pointer to point and access those items

   2) Using double pointer (shorter but harder to understand):
    - We first make a pointer array of the number of rows (every pointer in row will point to first column of that row and then we can increment it however we want)
    - We then use a single loop to simply add columns to every specific row 
    - We can then use a double loop to iterate over it like a normal 2D array
    - arr2D --> start of array of pointers
     *arr2D --> First Address pointed by first array / row (sub-array)
     *(*arr2D) --> First value of first array (row 0, col 0)
     (*arr2D)++ --> Move to next address (next column) in the first array / row
     arr2D++ --> Move to Next row (second sub-array)

   Dynamic 3D arrays:
   1) Using a single pointer:
    - ...

   2) Using triple pointer (shorter but harder to understand)
    - ...

   Constant pointer:
   - A constant pointer is a pointer that is *constant*, such that we cannot change the memory location to which the pointer points to
    (after initialising it)

   Pointer TO cons  tant:
   - We cannot set a non-const pointer to a constant data item since we then potentially allow the value to be changed through the pointer 
   - These type of pointers can change the address they point to, but cannot change the value kept at those addresses

   const char* pointer:
   - This is a pointer to a constant character. You cannot change the value in the memory location pointed by ptr, but you can change the
    pointer to point to another memory location

   char* const ptr:
   - This is a constant pointer to a non-constant character. You cannot change the pointer to point to another memory location, but it
    can change the value in the memory location pointed by ptr

   const char* const ptr:
   - This is a constant pointer to a constant character. You can neither change the value in the memory location pointed by ptr, nor can
    you change the pointer to point to another memory location



*/

int main() {
    /* Pointer basics */
    // int x = 10;
    // int* pntr = &x; // Here '*' operator is used for initialising a pointer storing location and pointing to an integer data type
    // cout << "Memory address of x: " << pntr << endl;
    // cout << "Value of x: " << *pntr << endl; /* Deferencing: In this case '*' acts as the deferecencing operator - it goes to the
    // location stored inside it and accesses the contents inside that location */

    /* Pointer aliases */
    // int* pntr = &x;
    // int* pntr2;
    // pntr2 = pntr; // pntr 2 has been assigned the memory location of 'x' now
    // cout << "Memory address of x: " << pntr << endl;
    // cout << "Memory address of x: " << pntr2 << endl;
    // cout << "Value of x: " << *pntr << endl;
    // cout << "Value of x: " << *pntr2 << endl; /* pntr2 is basically an alias for pntr since both point to the same location
    // (2 names for the same pointer!) */

    /* Swapping variables using pointers */
    // int x = 20;
    // int y = 50;
    // cout << "Before swap: x = " << x << ", y = " << y << endl;
    // int temp;
    // int* pntr = &x;
    // int* pntr2 = &y;

    // temp = *pntr;
    // *pntr = *pntr2;
    // *pntr2 = temp;

    // cout << "After swap: x = " << x << ", y = " << y << endl;
    // cout << "After swap: x = " << *pntr << ", y = " << *pntr2 << endl;

    /* Dynamic memory allocation */
    // int* pntr;
    // int* pntr2;
    // pntr = new int; // Dynamically allocates memory for an integer on the heap (free store) and assigns the address to pntr
    // *pntr = 99; // Initializes the allocated memory with the value 99
    // pntr2 = pntr; // Pointer aliasing: pntr2 now points to the same memory location as pntr

    // *pntr2 = 88; // Modifies the value in the shared memory location through pntr2

    // delete pntr; // Deallocates the memory, making it inaccessible through both pointers
    // pntr = NULL; // Sets pntr to NULL to prevent dangling pointer
    // pntr2 = 0; // Sets pntr2 to 0 to prevent dangling pointer

    /* Arrays & Pointers */
    // int myList[15] = {14, 73, 28, 42, 95, 19, 4, 85, 67, 23, 51, 11, 36, 79, 50};
    // int* p = myList; // Equivalent to int* p = &myList[0]
    // cout << "First element of list: " << *myList << endl; // Array name is just a pointer itself pointing to the first element's address
    // cout << "Second element of list: " << *(p + 1) << endl; // First method of accessing array elements through pointers
    // cout << "Fifth element of list: " << p[4] << endl; // Second method of accessing array elements through pointers

    // for (int i = 0; i < 15; i++) // Accessing 1D array through loop using pointers
    // {
    //     cout << "Value: " << *p << endl;
    //     p++; // Moving onto the address of the next element (can also do *(p + i) instead)
    // }

    // int arr2D[3][3] = 
    // {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // int *ptr2D;
    // ptr2D = &arr2D[0][0]; // assign the address of the first element
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << "Value of ptr2D: " << *ptr2D << endl;
    //     ptr2D++; // increment the pointer (or do *(p + i))
    // }

    /* Dynamic array allocation (Using single pointer) */



    /* Dynamic array allocation (Using double pointer) */
    // int rows = 3;
    // int cols = 4;
    // int** arr2D = new int* [rows]; // This has created a pointer array of 3 rows and each one of the pointers are going to point to the first column in their row
    // for (int i = 0; i < rows; i++)
    // {
    //     arr2D[i] = new int[cols]; // We have now created 4 columns for each of the 3 rows
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         *(*(arr2D + i) + j) = -1; // Same as arr2D[i][j] = -1; (Setting all elements to -1)
    //     } 
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << arr2D[i][j] << endl;
    //     }   
    // }

    // // IMPORTANT: Freeing the allocated memory
    // for (int i = 0; i < rows; i++) {
    //     delete[] arr2D[i]; // Free each row
    // }
    // delete[] arr2D; // Free the array of pointers

    /* Constant pointer */
    // char c = 'c';
    // char d = 'd';
    // int v1 = 90;
    // char* const ptr1 = &c;
    // ptr1 = &d; This is not allowed since const ptr1 means we cannot make it point to any other memory location anymore 

    /* Pointer to constant */
    // const int num = 5;
    // int* ptr = &num; // This is not allowed since we can then have the potential to change the value of 'num' through the pointer
    // const int* ptr = &num; // This is fine, since we cannot modify ptr or num
    // *ptr = 6; // Won't work 

    int var1 = 0;
    int var2 = 500;
    const int* ptr = &var1; 
    // *ptr = 100; Cannot change the value in the memory location, since its a pointer to a constant
    ptr = &var2; // But we can change the address it points to
    cout << *ptr;
    
    

    return 0;
}