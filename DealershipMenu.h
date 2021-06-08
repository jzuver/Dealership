
#ifndef M2OEP_CLASS_RELATIONSHIPS_JZUVER_DEALERSHIPMENU_H
#define M2OEP_CLASS_RELATIONSHIPS_JZUVER_DEALERSHIPMENU_H

#include "Motorcycle.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;


class DealershipMenu {
private:
    string storedUserName;
    string storedUserPassword;

public:

    /**
    * Default constructor
    * Requires: nothing
    * Modifies: userName and userPassword fields
    * Effects: calls parent default constructor and sets fields to default values
    */
    DealershipMenu();

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns userName field
    */
    string getUserName() const;

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns userPassword field
    */
    string getUserPassword() const;

    /**
    * Requires: string value as argument
    * Modifies: userName field
    * Effects: sets userName field
    */
    void setUserName(string userName);

    /**
    * Requires: string value as argument
    * Modifies: userPassword field
    * Effects: sets userPassword field
    */
    void setUserPassword(string userName);

    /**
    * Requires: nothing
    * Modifies: userName and UserPassword fields
    * Effects: ask user to create username and password, then have user login
    */
    void getUsernameAndPassword();

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: ask user whether they want to customize a standard vehicle or a motorcycle.
    * Calls the corresponding function. Once program has run once,
    * asks the user if the would like to run it again
    */
    void displayAutomotiveOptions();

    /**
    * Requires: nothing
    * Modifies: vehicle and engine classes
    * Effects: ask user to pick standard vehicle customization options, then creates a Vehicle
    * object with user-defined arguments
    */
    void customizeStandardVehicle();

    /**
    * Requires: nothing
    * Modifies: motorcycle and engine classes
    * Effects: ask user to pick motorcyle customization options, then creates a Motorcycle
    * object with user-defined arguments
    */
    void customizeMotorcycle();
};


#endif //M2OEP_CLASS_RELATIONSHIPS_JZUVER_DEALERSHIPMENU_H
