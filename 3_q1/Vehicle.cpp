/**
 * @file Vehicle.cpp
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the implementation file for the class Vehicle and Truck.
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
#include <iomanip>

using namespace std;

// Constructors
Vehicle::Vehicle()
{
    manufacturer = "No manufacturer yet";
    numCylinder = 0;
    Person();
}

Vehicle::Vehicle(string theManufacturer, int theNumCylinder, Person theOwner)
{
    manufacturer = theManufacturer;
    numCylinder = theNumCylinder;
    owner = theOwner;
}

Vehicle::Vehicle(const Vehicle& theObject)
{
    manufacturer = theObject.getManufacturer();
    numCylinder = theObject.getNumCylinder();
    owner = theObject.getOwner();
}

// Accessors
string Vehicle::getManufacturer() const
{
    return manufacturer;
}

int Vehicle::getNumCylinder() const
{
    return numCylinder;
}

Person Vehicle::getOwner() const
{
    return owner;
}

// Mutators
void Vehicle::setManufacturer(string newManufacturer)
{
    manufacturer = newManufacturer;
}

void Vehicle::setNumCylinder(int newNumCylinder)
{
    numCylinder = newNumCylinder;
}

void Vehicle::setOwner(Person newOwner)
{
    owner = newOwner;
}

Vehicle& Vehicle::operator =(const Vehicle& rtSide)
{
    setManufacturer(rtSide.manufacturer);
    setNumCylinder(rtSide.numCylinder);
    setOwner(rtSide.owner);
    return *this;
}

/**
 * @brief This function prompts for information of an object Vehicle
 *
 * @param theVehicle is the object that the function prompts information for
 */
void promptVehicleInfo(Vehicle& theVehicle)
{
    bool inputError = true;

    while(inputError)
    {
        try
        {
            cout << "Enter the manufacturer\n";
            cin >> theVehicle.manufacturer;
            if(cin.fail())
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

    inputError = true;
    while(inputError)
    {
        try
        {
            cout << "Enter the number of cylinders in the engine\n";
            cin >> theVehicle.numCylinder;
            if(cin.fail())
            {
                throw FormatMistake();
            }
            else if(theVehicle.numCylinder < 0)
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

    inputError = true;
    while(inputError)
    {
        try
        {
            cout << "Enter the owner\n";
            cin >> theVehicle.owner;
            if(cin.fail())
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
}

/**
 * @brief This function displays the information for a Vehicle
 *
 * @param theVehicle s the object that the function displays information for
 */
void dispVehicleInfo(Vehicle& theVehicle)
{
    cout << "Manufacturer: " << theVehicle.getManufacturer() << endl;
    cout << "Number of cylinders in the engine: "
         << theVehicle.getNumCylinder() << endl;
    cout << "Owner: " << theVehicle.getOwner() << endl;
}


// Constructors
Truck::Truck()
{
    loadCapacity = 0.0;
    towingCapacity = 0;
}

Truck::Truck(string theManufacturer, int theNumCylinder, Person theOwner,
             double theLoadCapacity, int theTowingCapacity) :
        Vehicle(theManufacturer, theNumCylinder, theOwner)
{
    loadCapacity = theLoadCapacity;
    towingCapacity = theTowingCapacity;
}

Truck::Truck(const Truck& theObject)
{
    setManufacturer(theObject.getManufacturer());
    setNumCylinder(theObject.getNumCylinder());
    setOwner(theObject.getOwner());

    loadCapacity = theObject.getLoadCapacity();
    towingCapacity = theObject.getTowingCapacity();
}

// Accessors
double Truck::getLoadCapacity() const
{
    return loadCapacity;
}

int Truck::getTowingCapacity() const
{
    return towingCapacity;
}

// Mutators
void Truck::setLoadCapacity(double newLoadCapacity)
{
    loadCapacity = newLoadCapacity;
}

void Truck::setTowingCapacity(int newTowingCapacity)
{
    towingCapacity = newTowingCapacity;
}

Truck& Truck::operator =(const Truck& rtSide)
{
    setManufacturer(rtSide.getManufacturer());
    setNumCylinder(rtSide.getNumCylinder());
    setOwner(rtSide.getOwner());

    setLoadCapacity(rtSide.loadCapacity);
    setTowingCapacity(rtSide.towingCapacity);
    return *this;
}

/**
 * @brief This function prompts for information of an object Truck
 *
 * @param theTruck is the object that the function prompts information for
 */
void promptTruckInfo(Truck& theTruck)
{
    bool inputError = true;

    promptVehicleInfo(theTruck);

    while(inputError)
    {
        try
        {
            cout << "Enter the load capacity in tons\n";
            cin >> theTruck.loadCapacity;
            if(cin.fail())
            {
                throw FormatMistake();
            }
            else if(theTruck.loadCapacity < 0)
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

    inputError = true;
    while(inputError)
    {
        try
        {
            cout << "Enter the towing capacity in pounds\n";
            cin >> theTruck.towingCapacity;
            if(cin.fail())
            {
                throw FormatMistake();
            }
            else if(theTruck.towingCapacity < 0)
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
}

/**
 * @brief This function displays the information for a Truck
 *
 * @param theVehicle s the object that the function displays information for
 */
void dispTruckInfo(Truck& theTruck)
{
    dispVehicleInfo(theTruck);
    cout << "Load capacity: " << fixed << setprecision(1)
         << theTruck.getLoadCapacity() << "T\n";
    cout << "Towing capacity: " << theTruck.getTowingCapacity() << "lbs\n";
}