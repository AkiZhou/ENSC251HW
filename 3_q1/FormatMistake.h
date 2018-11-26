/**
 * @file FormatMistake.h
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the interface file for the class FormatMistake.
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#ifndef FORMATMISTAKE_H
#define FORMATMISTAKE_H

#include <iostream>
#include <string>

using namespace std;

class FormatMistake
{
public:
    FormatMistake();
    string getMessage() const;

private:
    string message;
};

#endif //FORMATMISTAKE_H
