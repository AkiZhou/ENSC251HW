/**
 * @file Stack.cpp
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the interface for Exception class
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>
#include <string>

using namespace std;

class StackOverflowException
{
public:
    StackOverflowException();
    string getMessage();

private:
    string message;
};

class StackEmptyException
{
public:
    StackEmptyException();
    string getMessage();

private:
    string message;
};

class FormatMistake
{
public:
FormatMistake();
string getMessage();

private:
string message;
};

#endif //EXCEPTION_H
