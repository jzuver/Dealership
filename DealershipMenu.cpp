#include "DealershipMenu.h"

/************************* DealershipMenu class definitions ********************************/

DealershipMenu::DealershipMenu() {
    storedUserName = "default";
    storedUserPassword = "default";
}

// getters
string DealershipMenu::getUserName() const {
    return storedUserName;
}

string DealershipMenu::getUserPassword() const {
    return storedUserPassword;
}

// setters
void DealershipMenu::setUserName(string userName) {
    storedUserName = userName;
}

void DealershipMenu::setUserPassword(string userPassword) {
    storedUserPassword = userPassword;
}

void DealershipMenu::getUsernameAndPassword() {
    string userName;
    string userPass;
    string userNameLoginAttempt;
    string userPassLoginAttempt;
    bool validLogin = false;

    cout << "Welcome to the Zuver Dealership. Please create an account to continue. \n";

    // get username from user
    cout << "\nCreate username: ";
    cin >> userName;
    setUserName(userName);

    // get password from user
    cout << "\nCreate password: ";
    cin >> userPass;
    setUserPassword(userPass);

    // display account creation message, have user login to continue
    cout << "\nAccount created successfully. Please login to continue.\n";

    while(!validLogin){
        cout << "\nEnter username: ";
        cin >> userNameLoginAttempt;
        cout << "\nEnter password: ";
        cin >> userPassLoginAttempt;

        if(userNameLoginAttempt == storedUserName && userPassLoginAttempt == storedUserPassword){
            validLogin = true;
        }
        else{
            cout << "\nInvalid credentials. Please try again." << endl;
        }
    }
}

void DealershipMenu::displayAutomotiveOptions() {
    int userChoice;
    char runAgainChoice;
    bool runAgain = true;

    while (runAgain){
        // welcome user, prompt user for whether they wish to customize a standard vehicle
        // or a motorcycle
        cout << "\nWelcome! Please enter the number associated with the type of automotive you would like to customize.\n1: Standard Vehicle\n2: Motorcycle\n";

        // get user choice, input-validated
        while((!(cin >> userChoice)) || userChoice != 1 && userChoice != 2){
            cout << "Invalid input. Please enter either 1 or 2.\n";
            cin.clear();
            string junk;
            getline(cin, junk);
        }

        // call the corresponding function
        if(userChoice == 1) {
            customizeStandardVehicle();
        }
        else{
            customizeMotorcycle();
        }

        // program ran once, ask user whether or not they would like to customize another vehicle
        cout << "\nWould you like to customize another vehicle? (y/n)\n";
        while ((!(cin >> runAgainChoice)) || tolower(runAgainChoice) != 'y' && tolower(runAgainChoice) != 'n'){
            cout << "Invalid input. Please enter either y or n.\n";
            cin.clear();
            string junk;
            getline(cin, junk);
        }

        // run program again if user wants to, otherwise exit and display exit message
        runAgainChoice = tolower(runAgainChoice);
        if(runAgainChoice == 'y'){
            runAgain = true;
        }
        else{
            cout << "\nThank you for visiting the Zuver Dealership!";
            runAgain = false;
        }
    }
}

void DealershipMenu::customizeStandardVehicle() {
    string userColor;
    string userMake;
    string userModel;
    Engine engineType;
    int userChoice;

    // get make customization choice from user, input-validated
    cout << "Welcome to Standard Vehicle customization. Please enter the number associated\nwith the customization option you would like to pick.";
    cout << "\nVehicle make: \n1: Chevy\n2: Ford \n3: Honda\n4: Toyota\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 4) {
        cout << "Invalid input. Please enter either 1, 2, 3, or 4.\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            userMake = "Chevy";
            break;
        case 2:
            userMake = "Ford";
            break;
        case 3:
            userMake = "Honda";
            break;
        case 4:
            userMake = "Toyota";
            break;
    }

    // get model customization choice from user, input-validated
    cout << "Vehicle model: \n1: 2-door\n2: 4-door\n";
    while ((!(cin >> userChoice)) || userChoice != 1 && userChoice != 2) {
        cout << "Invalid input. Please enter either 1 or 2.\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            userModel = "2-door";
            break;
        case 2:
            userModel = "4-door";
            break;
    }

    // get color customization choice from user, input-validated
    cout << "Vehicle color: \n1: Black\n2: Blue\n3: Green\n4: Grey\n5: Orange\n6: Red\n7: White\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 7) {
        cout << "Invalid input. Please enter a number between 1 and 7 (inclusive).\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            userColor = "Black";
            break;
        case 2:
            userColor = "Blue";
            break;
        case 3:
            userColor = "Green";
            break;
        case 4:
            userColor = "Grey";
            break;
        case 5:
            userColor = "Orange";
            break;
        case 6:
            userColor = "Red";
            break;
        case 7:
            userColor = "White";
            break;

    }

    // get engine customization choice from user, input-validated
    cout << "Engine: \n1: V4\n2: V6\n3: V8\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 3) {
        cout << "Invalid input. Please enter either 1, 2, or 3.\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            engineType.setEngineType("V4");
            break;
        case 2:
            engineType.setEngineType("V6");
            break;
        case 3:
            engineType.setEngineType("V8");
            break;
    }

    // create Vehicle object using user-defined parameters
    Vehicle v(userColor, userMake, userModel, engineType);

    // display vehicle specifications to user.
    cout << "Thank you for customizing a standard vehicle, below are your\nvehicle specifications: "<< endl;
    cout << v;
}

void DealershipMenu::customizeMotorcycle() {
    string userColor;
    string userMake;
    string userModel;
    Engine engineType;
    string userAccessory;
    int userChoice;

    // get make customization choice from user, input-validated
    cout << "Welcome to Motorcycle customization. Please enter the number associated\nwith the customization option you would like to pick.";
    cout << "\nMotorcycle make: \n1: Harley\n2: Kawasaki\n3: Suzuki\n4: Yamaha\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 4) {
        cout << "Invalid input. Please enter either 1, 2, 3, or 4.\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            userMake = "Harley";
            break;
        case 2:
            userMake = "Kawasaki";
            break;
        case 3:
            userMake = "Suzuki";
            break;
        case 4:
            userMake = "Yamaha";
            break;
    }

    // get model customization choice from user, input-validated
    cout << "Motorcycle model: \n1: Cruiser\n2: Sport\n3: Standard\n4: Touring\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 4) {
        cout << "Invalid input. Please enter either 1, 2, 3, or 4.\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            userModel = "Cruiser";
            break;
        case 2:
            userModel = "Sport";
            break;
        case 3:
            userModel = "Standard";
            break;
        case 4:
            userModel = "Touring";
            break;
    }

    // get color customization choice from user, input-validated
    cout << "Motorcycle color: \n1: Black\n2: Blue\n3: Green\n4: Grey\n5: Orange\n6: Red\n7: White\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 7) {
        cout << "Invalid input. Please enter a number between 1 and 7 (inclusive).\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            userColor = "Black";
            break;
        case 2:
            userColor = "Blue";
            break;
        case 3:
            userColor = "Green";
            break;
        case 4:
            userColor = "Grey";
            break;
        case 5:
            userColor = "Orange";
            break;
        case 6:
            userColor = "Red";
            break;
        case 7:
            userColor = "White";
            break;

    }

    // get engine customization choice from user, input-validated
    cout << "Engine: \n1: Single\n2: Twin\n3: Triple\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 3) {
        cout << "Invalid input. Please enter either 1, 2, or 3.\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            engineType.setEngineType("Single");
            break;
        case 2:
            engineType.setEngineType("Twin");
            break;
        case 3:
            engineType.setEngineType("Triple");
            break;
    }

    // get accessory customization choice from user, input-validated
    cout << "Accessory: \n1: Cover\n2: Saddlebags\n3: Tool kit\n4: None\n";
    while ((!(cin >> userChoice)) || userChoice < 1 || userChoice > 4) {
        cout << "Invalid input. Please enter either 1, 2, 3, or 4.\n";
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    switch (userChoice) {
        case 1:
            userAccessory = "Cover";
            break;
        case 2:
            userAccessory = "Saddlebags";
            break;
        case 3:
            userAccessory = "Tool kit";
            break;
        case 4:
            userAccessory = "None";
            break;
    }

    // create Vehicle object using user-defined parameters
    Motorcycle m(userColor, userMake, userModel, engineType, userAccessory);

    // display vehicle specifications to user.
    cout << "Thank you for customizing a motorcycle, below are your\nmotorcycle specifications: "<< endl;
    cout << m;
}