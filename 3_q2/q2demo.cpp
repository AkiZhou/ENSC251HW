/**
 * @file q2demo.cpp
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the driver program for a stack class for storing a stack
 *          of elements of type char.
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#include "Stack.h"
#include "Exception.h"
#include <iostream>

using namespace std;

int main()
{
    int done = 1;
    char input = '\0';

    // Prompt for the size and then create an object
    Stack aStack(prompt());

    while(done == 1 || done == 2)
    {
        cout << "Enter 1 to push, 2 to pop, any other integer to exit\n";
        cin >> done;
        if (cin.fail())
        {
            cerr << "ERROR: invalid choice\nTry again\n";
            cin.clear();
            cin.ignore(10000,'\n');
            done = 1;
            continue;
        }

        if (done == 1) // Add to the stack
        {
            try
            {
                if(aStack.canPush())
                {
                    cout << "Enter a character to be added to the stack\n";
                    cin >> input;

                    aStack.push(input);
                }
                else
                {
                    throw StackOverflowException();
                }
            }
            catch(StackOverflowException& e)
            {
                cerr << e.getMessage();
            }
        }
        else if(done == 2) // Remove from the stack
        {
            cout << aStack.pop() << endl << endl;
        }
    }

    return 0;
}