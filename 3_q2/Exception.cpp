/**
 * @file Stack.cpp
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the implementation for Exception class
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#include "Exception.h"

StackOverflowException::StackOverflowException()
{
    message = "ERROR: the stack is full, can't add\n\n";
}

string StackOverflowException::getMessage()
{
    return message;
}

StackEmptyException::StackEmptyException()
{
    message = "ERROR: the stack is empty, can't pop";
}

string StackEmptyException::getMessage()
{
    return message;
}

FormatMistake::FormatMistake()
{
    message = "ERROR: invalid input\nTry again\n";
}

string FormatMistake::getMessage()
{
    return message;
}