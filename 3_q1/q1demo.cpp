/**
 * @file q1demo.cpp
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the driver program for the class Vehicle and its child
 *          Truck
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Testing default constructors, accessor, mutator functions of the"
            "class Vehicle and Truck\nThe result should be\n"
            "--------------------------------------------------------------\n"
            "Manufacturer: No manufacturer yet\n"
            "Number of cylinders in the engine: 0\n"
            "Owner: No name yet\n"
            "Load capacity: 0.0T\n"
            "Towing capacity: 0lbs\n"
            "--------------------------------------------------------------\n"
            "Result\n\n";
    Truck truck1;
    dispTruckInfo(truck1);
    cout << "--------------------------------------------------------------\n"
         << "Continue to next test\n\n";

    cout << "Initializing truck2\n"
            "The result should be\n"
            "--------------------------------------------------------------\n"
            "Manufacturer: Mitsubishi\n"
            "Number of cylinders in the engine: 6\n"
            "Owner: Aki Zhou\n"
            "Load capacity: 2.5T\n"
            "Towing capacity: 8000lbs\n"
            "--------------------------------------------------------------\n"
            "Result\n\n";
    Person person1("Aki Zhou");
    Truck truck2("Mitsubishi", 6, person1, 2.5, 8000);
    dispTruckInfo(truck2);
    cout << "--------------------------------------------------------------\n"
         << "Continue to next test\n\n";

    cout << "Testing overloaded assignment operator\n"
            "Copying content of truck2 to truck1\n"
            "The result should be\n"
            "--------------------------------------------------------------\n"
            "Manufacturer: Mitsubishi\n"
            "Number of cylinders in the engine: 6\n"
            "Owner: Aki Zhou\n"
            "Load capacity: 2.5T\n"
            "Towing capacity: 8000lbs\n"
            "--------------------------------------------------------------\n"
            "Result\n\n";
    truck1 = truck2;
    dispTruckInfo(truck1);
    cout << "--------------------------------------------------------------\n"
         << "Continue to next test\n\n";

    cout << "Testing prompt functions\n";
    Truck truck3;
    promptTruckInfo(truck3);
    cout << "--------------------------------------------------------------\n"
         << "Your truck information\n\n";
    dispTruckInfo(truck3);
    cout << "--------------------------------------------------------------\n"
         << "End of all tests\n";

    return 0;
}