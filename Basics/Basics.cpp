// c++ Basics
#include <iostream>
using namespace std;
/* Int Data Types
    short int: 2 bytes --> -32,768 to +32,768
    unsigned short int: 2 bytes --> 0 to +65,535
    int: 4 bytes --> -2,147,483,648 to +2,147,483,648
    unsigned int: 4 bytes --> 0 to 4,294,967,295 
    long int: 4 bytes --> -2,147,483,648 to +2,147,483,648
    unsigned long int:  4 bytes --> 0 to 4,294,967,295
    long long int: 8 bytes --> -9 billion to +9 billion
    unsigned long long int: 8 bytes --> 0 to 18,446,744,073,709,551,615
*/

/* Float Data Types
    float: 4 bytes
    double: 8 bytes
    long double: 8 bytes
*/

/* Special characters
    // (Double-Slash): Marks the beginning of a comment
    # (Pound sign): Marks the beginning of a preprocessor directive
    <> (Opening & Closing brackets): Encloses filename when used with the #include directive.
    () (Opening & Closing paranthesis): Used after naming a function, as in int main()
    {} (Opening & Closing braces): Encloses a group of statements, such as contents of a function
    "" (Opening & Closing quoation marks): Encloses a string of characters, such as a message
    ; (Semi-colon): Marks the end of a complete programming statement
*/

/* Arithmetic Operators
    unary (1 operand): E.g. -5
    binary (2 operands): E.g. 13 - 7 or 14 + 5
    ternary (3 operands): E.g. exp1 ? exp2 (Evalutes if True) : exp3 (Evaluates if False)
    
    +: Adds two operands
    -: Subtracts two operands
    *: Multiplies two operands
    /: Divides two operands
    %: Finds the remainder after *integer* division
    ++: Increments value by 1, e.g. ++A = A + 1. If ++ is before the variable then value gets decremented instantly, if it is after the variable then increment is after the statement is completed
    --: Decrements value by 1, e.g. --A = A + 1. If -- is before the variable then value gets decremented instantly, if it is after the variable then decrement is after the statement is completed
    
    Relational Operators
    ==: Returns true if two operands are equal
    !=: Returns true if two operands are not equal
    >, <, >=, <=: Greater than, Less than, Greater than or Equal to, Less than or Equal to
    
    Logical Operators
    &&: AND
    ||: OR
    !: NOT, e.g. if A = True, !A = False
    
    Assignment Operators
    =: Equal to
    +=: A += 2 means A = A + 2
    -=: A -= 2 means A = A - 2
    *=: A *= 2 means A = A * 2
    /=: A /= 2 means A = A / 2
    
    Bitwise operators
    &: Binary AND operator
    |: Binary OR operator
    ^: Binary XOR operator
    ~: Binary 1s Complement
    <<: Binary Left Shift, E.g. 4 (0100) so 4 << 1 means 1000 = 8
    >>: Binary Right Shift, E.g. 4 (0100) so 4 >> 1 meand 0010 = 2
    
    Escape Sequences / Control character
    \n (Newline): Causes cursor to go to next line for subsequent printing
    \t (Horizontal tab): Causes ther cursor to skip over to the next tab stop
    \a (Alarm): Causes computer to beep
    \b (backspace): Causes the cursor to back up, or move left one position
    \r (Return): Causes cursor to go to the beginning of the current line, not the next line
    \\ (Double backslash): Since cpp compilers don't print 1 backslash, therefore to print 1 backslash you need to write backslash 2 times.
    \' (Single Quote): To print a single quotation mark you need to add a backslash before it
    \" (Double Quote): To print a double quotation mark you need to add a backslash before it

*/

/* Typecasting
    Coercion: Automatic conversion of an operand to another data type

    Coercion Rules (Mainly for implicit type casting)
    1) char, short, unsigned short are automatically promoted to int
    2) When operating on values of different data types, the lower one is promoted to the type of the higher one
    3) For the assignment operator '=' the type of expression on right will be converted to the type of the variable on the left
    
    Hierarchy of data types (Lowest to Highest):
    int --> unsigned --> long int --> unsigned long int --> float --> double --> long double

    Widening typecasting (implicit)
    Widening type casting, also known as implicit type casting, is a process where a value of a smaller data type is automatically
    converted to a larger data type without losing any information.
    For Example:
    - int (smaller) to long (larger)
    - float (smaller) to double (larger)
    - char (smaller) to int (larger)

    Narrowing typecasting (explicit)
    Narrowing type casting, also known as explicit type casting, is a process where a value of a larger data type is converted to
    a smaller data type, potentially losing information.
    For Example:
    - long (larger) to int (smaller)
    - double (larger) to float (smaller)
    - int (larger) to char (smaller)

    Explicit typecasting (done by the programmer)
    Three ways:
    1) int c = (int)a --> C-Style cast
    2) int c = int(a) --> Functional notation
    3) int c = static_cast<int>(a) --> Static casting, general syntax: static_cast<type>(expression)
*/

/*
    Overflow: 
    In many programming languages, the maximum value that can be stored in an int data type is 32767. If you add 1 to this value, an overflow occurs.
    In most systems, the overflow wraps around to the minimum value, which is -32768. So, the new answer would be: 
    32767 + 1 = -32768
          
    Underflow:
    int minValue = -32768;
    minValue = minValue - 1;
    minValue now equals 32767
    In the underflow example, subtracting 1 from the minimum value causes the value to wrap around to the maximum value. 
*/
int main() {
    cout << "Hello World " << endl;
    cout << "No" << endl;
    cout << "Your mom";
    return 0;
} 