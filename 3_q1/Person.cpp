/**
 * @file Person.cpp
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the implementation file for the class Person.
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#include "Person.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// constructors
Person::Person()
{
    name = "No name yet";
}

Person::Person(string theName)
{
    name = theName;
}

Person::Person(const Person& theObject)
{
    name = theObject.getName();
}

// Accessors
string Person::getName() const
{
    return name;
}

Person& Person::operator =(const Person& rtSide)
{
    name = rtSide.name;
    return *this;
}

istream& operator >>(istream& inStream, Person& personObject)
{
    cin.ignore();
    getline(inStream, personObject.name);
    return inStream;
}

ostream& operator <<(ostream& outStream, const Person& personObject)
{
    outStream << personObject.name;
    return outStream;
}