
#ifndef M2OEP_CLASS_RELATIONSHIPS_JZUVER_VEHICLE_H
#define M2OEP_CLASS_RELATIONSHIPS_JZUVER_VEHICLE_H

#include <string>
#include <iostream>
#include "Engine.h"
using std::ostream;
using std::endl;

class Vehicle{
protected:
    string color;
    string make;
    string model;
    Engine engine;
public:

    /**
    * Default constructor
    * Requires: nothing
    * Modifies: color, make, and model fields
    * Effects: calls parent default constructor and sets fields to default values
    */
    Vehicle();

    /**
    * Non-default constructor
    * Requires: nothing
    * Modifies: color, make, and model fields
    * Effects: calls parent default constructor and sets fields to default values
    */
    Vehicle(string color, string make, string model, Engine engine);

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns the color field
    */
    string getColor() const;

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns the make field
    */
    string getMake() const;

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns the model field
    */
    string getModel() const;

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns the engine field
    */
    Engine getEngine() const;

    /**
    * Requires: string as argument
    * Modifies: color field
    * Effects: sets color field
    */
    void setColor(string color);

    /**
    * Requires: string as argument
    * Modifies: make field
    * Effects: sets make field
    */
    void setMake(string make);

    /**
    * Requires: string as argument
    * Modifies: model field
    * Effects: sets model field
    */
    void setModel(string model);

    /**
    * Requires: engine as argument
    * Modifies: engine field
    * Effects: sets engine field
    */
    void setEngine(Engine model);

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: overloads the output operator to display the vehicles specifications
    */
    friend ostream& operator << (ostream& outs, Vehicle &vehicle);

};
#endif //M2OEP_CLASS_RELATIONSHIPS_JZUVER_VEHICLE_H
