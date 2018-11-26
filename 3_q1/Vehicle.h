/**
 * @file Vehicle.h
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the interface file for the class Vehicle and Truck.
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include "Person.h"
#include "FormatMistake.h"

using namespace std;

class Vehicle
{
public:
    // Constructors
    Vehicle();
    Vehicle(string theManufacturer, int theNumCylinder, Person theOwner);
    Vehicle(const Vehicle& theObject);

    // Accessors
    string getManufacturer() const;
    int getNumCylinder() const;
    Person getOwner() const;

    // Mutators
    void setManufacturer(string newManufacturer);
    void setNumCylinder(int newNumCylinder);
    void setOwner(Person newOwner);

    Vehicle& operator =(const Vehicle& rtSide);

    friend void promptVehicleInfo(Vehicle& theVehicle);
    friend void dispVehicleInfo(Vehicle& theVehicle);

private:
    string manufacturer;
    int numCylinder;
    Person owner;
};

class Truck : public Vehicle
{
public:
    // Constructors
    Truck();
    Truck(string theManufacturer, int theNumCylinder, Person theOwner,
          double theLoadCapacity, int theTowingCapacity);
    Truck(const Truck& theObject);

    // Accessors
    double getLoadCapacity() const;
    int getTowingCapacity() const;

    // Mutators
    void setLoadCapacity(double newLoadCapacity);
    void setTowingCapacity(int newTowingCapacity);

    Truck& operator =(const Truck& rtSide);

    friend void promptTruckInfo(Truck& theTruck);
    friend void dispTruckInfo(Truck &theTruck);

private:
    double loadCapacity;
    int towingCapacity;
};

#endif //VEHICLE_H
