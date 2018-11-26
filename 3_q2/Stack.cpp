/**
 * @file Stack.cpp
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the implementation for Stack class
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

// Constructors
Stack::Stack()
{
    cerr << "ERROR: no input argument detected\nTerminating\n";
    exit(0);
}

Stack::Stack(int capacity)
{
    size = capacity;
    numChar = 0;
    charStack = new char[size + 1]; // +1 to have space for '\n'
}

Stack::Stack(const Stack& theObject)
{
    size = theObject.size;
    numChar = theObject.numChar;
    charStack = new char[size + 1]; // +1 to have space for '\n'

    // This for loop copies the object elements
    for(int i = 0; i < size; i++)
    {
        charStack[i] = theObject.charStack[i];
    }
}

// Destructor
Stack::~Stack()
{
    delete [] charStack;
}

/**
 * @brief This function determines if the user can push or not
 *
 * @return true if stack is not full else false
 */
bool Stack::canPush()
{
    if(numChar < size)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack::push(char newCharacter)
{
    numChar++;
    charStack[numChar] = newCharacter;
    cout << endl;
}

/**
 * @brief This function pops the lastElement in the stack
 *
 * @return lastElement of the stack or a whitespace if the stack is empty
 */
char Stack::pop()
{
    try
    {
        if (numChar > 0)
        {
            char lastElement = '\0';

            lastElement = charStack[numChar];
            charStack[numChar] = '\0';
            numChar--;

            return lastElement;
        }
        else
        {
            throw StackEmptyException();
        }
    }
    catch(StackEmptyException& e)
    {
        cerr << e.getMessage();
        return ' ';
    }
}

/**
 * @brief This function prompts for the size of stack
 *
 * @return size
 */
int prompt()
{
    int size = 0;
    bool inputError = true;

    while(inputError)
    {
        try
        {
            cout << "Enter the size of stack\n";
            cin >> size;
            if(cin.fail())
            {
                throw FormatMistake();
            }
            else if(size <= 0)
            {
                throw FormatMistake();
            }
        }
        catch(FormatMistake& e)
        {
            cerr << e.getMessage();
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        inputError = false;
    }

    return size;
}