/**
* @file q1.cpp
* @author Shengcong Zhou * @Date 2018.Jun.12
* @version 1.0
* @brief This is the implementation of class grade
*/
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jun.12______________ //
// ____ 301336141 ______ //

#include <iostream>
#include "q1.h"
#include "sorting.h"

using namespace std;

// Constructor
GradeArr::GradeArr()
{
    capacity = 3;
    grade = new int[capacity];
    numElement = 0;

    scoreVariation = 0;
}

// Destructor
GradeArr::~GradeArr()
{
    delete [] grade;
    delete [] score;
    delete [] scoreCount;
}

/**
 * @brief This function prompts for grades until the use hits '-1'
 *
 * @param void
 * @return void
 */
void GradeArr::prompt()
{
    int input = 0;

    cout << "Enter grades\n";

    while(input != -1)
    {
        if(numElement == capacity)
        {
            expand();
        }

        cin >> grade[numElement];

        if(cin.fail())
        {
            cerr << "ERROR: invalid input\nTry Again\n";
            cin.clear();
            cin.ignore(10000,'\n');
            continue;
        }
        else if(grade[numElement] < -1)
        {
            cerr << "ERROR: no negative grades allowed "
                    "except -1 to stop inputting\nTry Again\n";
            cin.clear();
            cin.ignore(10000,'\n');
            continue;
        }

        input = grade[numElement];

        numElement++;
    }
}

/**
 * @brief This function expands the capacity of grade dynamic array
 *
 * @param void
 * @return void
 */
void GradeArr::expand()
{
    capacity *= 2;

    int *tempArr = new int[capacity];
    copy(grade, grade + numElement, tempArr);

    delete [] grade;
    grade = tempArr;
}

/**
 * @brief This function displays the grade histogram by calling getHistogram to
 * calculate the histogram first
 *
 * @param void
 * @return void
 */
void GradeArr::displayHistogram()
{
    if(numElement == 1)
    {
        cout << "No score inputted\n";
        return;
    }
    else
    {
        getHistogram();
    }

    cout << endl;
    for(int i = 0; i < scoreVariation; i++)
    {
        cout << "Number of " << score[i] << "'s: " << scoreCount[i] << endl;
    }
}

/**
 * @brief This function calculates the histogram
 *
 * @param void
 * @return void
 */
void GradeArr::getHistogram()
{
    quickSort(grade, 0, numElement - 1);

    score = new int[numElement];
    scoreCount = new int[numElement];

    score[0] = grade[1];  // Omit the 1st element which is -1
    scoreCount[0] = 1;
    scoreVariation = 1;

    for (int i = 2; i < numElement + 1; i++)
    {
        if (grade[i] == grade[i - 1])
        {
            scoreCount[scoreVariation - 1]++;
        }
        else if (grade[i] > grade[i - 1])
        {
            scoreVariation++;
            score[scoreVariation - 1] = uint(grade[i]);
            scoreCount[scoreVariation - 1] = 1;
        }
    }
}
