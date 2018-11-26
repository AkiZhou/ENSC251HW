/**
* @file q1.h
* @author Shengcong Zhou * @Date 2018.Jun.12
* @version 1.0
* @brief This is the interface of class grade which contains grades
 * and has functions to prompt and display the histogram
*/
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jun.12______________ //
// ____ 301336141 ______ //

#ifndef Q1_H
#define Q1_H

#include <iostream>

class GradeArr
{
public:
    GradeArr();
    ~GradeArr();

    void prompt();
    void displayHistogram();

private:
    int capacity;
    int *grade;
    int numElement;

    int *score;
    int *scoreCount;
    int scoreVariation;

    void expand();
    void getHistogram();
};

#endif //Q1_H
