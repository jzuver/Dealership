
#ifndef M2OEP_CLASS_RELATIONSHIPS_JZUVER_MOTORCYCLE_H
#define M2OEP_CLASS_RELATIONSHIPS_JZUVER_MOTORCYCLE_H

#include "Vehicle.h"


class Motorcycle: public Vehicle{
private:
    string accessory;

public:

    /**
    * Default constructor
    * Requires: nothing
    * Modifies: color, make, model, engine, and accessory fields
    * Effects: calls parent default constructor and sets fields to default values
    */
    Motorcycle();

    /**
    * Default constructor
    * Requires: nothing
    * Modifies: color, make, and model fields
    * Effects: calls parent default constructor and sets fields to default values
    */
    Motorcycle(string color, string make, string model, Engine engine, string accessory);

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns accessory field
    */
    string getAccessory() const;

    /**
    * Requires: string argument
    * Modifies: accessory field
    * Effects: sets accessory field to passed in value
    */
    void setAccessory(string accessory);

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: overloads the output operator to display the vehicles specifications
    */
    friend ostream& operator << (ostream& outs, Motorcycle &motorcycle);
};

#endif //M2OEP_CLASS_RELATIONSHIPS_JZUVER_MOTORCYCLE_H
