// Loops in c++: FOR, WHILE, SWITCH (Basically like CASE-OF-OTHERWISE), DO-WHILE (Basically like REPEAT-UNTIL)
#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your age: ";
    cin >> age;
    // Switch statement
    // Syntax + Functionality:

    /* switch (age)
    {
    case 18: // First case
        cout << "You are an adult!" << endl;
        break; // Need to add this keyword so if 1 condition / case gets satisified the others don't get checked

    case 30: // Second case
        cout << "You are old!" << endl;
        break; // Need to add this keyword so if 1 condition / case gets satisified the others don't get checked

    default: // OTHERWISE case (gets checked if every other case check has failed)
        if (age < 18)
        {
            cout << "You are not an adult yet!" << endl;
        }
        else
        {
            cout << "You are an adult!" << endl;
        }
        break; // Need to add this keyword so if 1 condition / case gets satisified the others don't get checked
    }
    */

    // FOR loop & its variations
    /*
    for (int i = 0; i < 10; i++) // Syntax: for (initialization; condition; increment/decrement) {}
    {
        cout << "Iteration - " << i << endl;
    }

    int i = 0;
    for (; i < 5; i++) // Variation 1: If we initialise i then we don't need to initialise it again in the loop
    {
        // Do something
    }

    for (;;) // Variation 2: Only and only these 2 semi-colors are important for the compiler to not give any error
    {
        // Do something
    }

    for (int i = 10; i == 10; i++) // Variation 3: Only runs once since i == 10 initially and then it increments so condition is not satisfied thus loop breaks
    {
        // Do something
    }

    for (int i = 10; i = 10; i++) // Variation 4: Infinite loop since the condition is repeatedly assigning i = 10 thus being true repeatedly so the loop doesn't end
    {
        // Do something
    }

    for (int i = 10; i = 0; i++) // Variation 5: Will not run once since i = 0 means false and if condition is false then loop will not run at all
    {
        // Do something
    }
    
    for (int i = 0; i < 10; i++); // Variation 6: Semi-colon stops the execution so the loop does not run at all here as well
    
    for (int i = 1, j = 0; j < 3, i <= 5; ++i, j++)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }
    */

   // WHILE loop & its variations
   int i = 0;
   while (i < 5) // Syntax: while (condition) {*code*}
   {
    cout << "i: " << i << endl;
    i++;
   }
   
   int j = 0;
   while (i < 5 && j < 1) // Variation 1: Can add two or more conditions as well, will run until one of the conditions return false
   {
    i++;
    j++;
   }

   int i = 0;
   while (i = 1) // Variation 2: Runs for infinity since i = 1 is always true so loop keeps going
   {
    // Do something
   }

   // Other variations for infinite loop
   
   int j = 1;
   while (j)
   {
    // Do something
   }

   while (1)
   {
    // Do something
   }
   
   while (true)
   {
    // Do something
   }

   short int z = 1; // Variation 3: This will run till maximum limit (+32767) then cause an overflow so it'll go to -32767 then at some point it'll go to 0 so that's a false condition that's when loop will end
   while (z)
   {
    cout << "z: " << z << endl;
    z++;
   }
   
   bool inRange = false;
   int number;
   while (!inRange) // Variation 4: Flag looping, we use a flag (a boolean variable) to end the loop once our condition is met
   {
    cout << "Enter a number: ";
    cin >> number;
    if (number >= 0 && number <= 10)
    {
        inRange = true; // When inRange = true then !inRange = false thus this is when loop ends.
    }
    
   }
}
