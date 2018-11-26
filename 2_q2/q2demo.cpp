/**
* @file q2demo.cpp
* @author Shengcong Zhou * @Date 2018.Jun.20
* @version 1.0
* @section DESCRIPTION
*/
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jun.20______________ //
// ____ 301336141 ______ //

#include <iostream>
#include <vector>
#include "q2.h"

using namespace std;
using namespace queuesavitch;

int main()
{
    //declare variables
    long timeOut = 0;
    double currentWait = 0.0;
    double estimatedWait = 0.0;
    int choice = '\0';

    Queue line;
    vector<int> ticketsArr; // a vector for tickets

    for (int i=0; i < 10000; i++)
    {
        ticketsArr.push_back(i+1);
    }

    vector<long> avgWait;
    for (int i = 0; i < 3; i++)
    {
        avgWait.push_back(0);
    }

    while(choice != 3)
    {
        if (line.empty())
        {
            cout << "The line is empty." << endl;
        }

        cout << "Enter '1' to simulate a customer's arrival, '2' to help the"
             << " next customer, or '3' to quit." << endl;
        cin >> choice;

        // Error cases
        if(cin.fail())
        {
            cerr << "ERROR: invalid choice\nTry again\n\n";
            cin.clear();
            cin.ignore(10000,'\n');
            continue;
        }
        else if(choice < 1 || choice >3)
        {
            cerr << "ERROR: invalid choice\nTry again\n\n";
            cin.clear();
            cin.ignore(10000,'\n');
            continue;
        }

        // Choice dependent actions
        if(choice == 1)
        {
            // Add a customer
            cout << "Customer " << ticketsArr[0]
                 << " entered the queue at time ";
            line.add(ticketsArr[0]);
            ticketsArr.erase(ticketsArr.begin());
        }
        else if(choice == 2)
        {
            if(line.empty())
            {
                cout << "No customer in line.\n";
            }
            else
            {
                // Remove a customer
                timeOut = line.remove();
                cout << " Wait time = " << timeOut << " seconds.\n";

                // Calculate the average wait time
                avgWait.erase(avgWait.begin());
                avgWait.push_back(timeOut);

                if(avgWait[1] == 0.0 && avgWait[0] == 0.0)
                {
                    currentWait = avgWait[2];
                }
                else if(avgWait[0] == 0.0)
                {
                    currentWait = (avgWait[1] + avgWait[2]) / 2;
                }
                else
                {
                    currentWait = (avgWait[0] + avgWait[1] + avgWait[2]) / 3;
                }

                estimatedWait = currentWait;

                if(! line.empty())
                {
                    cout << "The estimated wait time for customer "
                         << line.nextCust() << " is " << estimatedWait
                         << " seconds.\n";
                }
            }
        }

        cout << endl;
    }
    return 0;
}

