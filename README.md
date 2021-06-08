
## Program Description
This program represents a automotive dealership. The user is first prompted to create an account, and they are 
then prompted to login using their account credentials. Once the user has logged in, they will be able to pick whether 
they wish to customize a standard vehicle or a motorcycle. The user then chooses a variety of customization options, and 
then their choices are displayed to the user. The user is then able to either exit the program or customize another automotive.

## Program Details

### Parent Class: Vehicle
The parent class for this program is the Vehicle class. It stores the make, model, color, and engine (component class) of the vehicle. The << operator is overloaded
to print the Vehicle's fields.

### Child Class: Motorcycle 
The child class inherits from Vehicle and shares an Is-a relationship (a motorcycle is a vehicle) with its parent class. It inherits all of the fields and methods
of its parent, and also has an additional field - accessory - that stores motorcycle accessory customization options. The << operator is overloaded to print the
motorcycle's fields.

### Component Class: Engine
The component class represents the engine for both the Vehicle and Motorcycle classes. It shares a Has-a relationship with both the Vehicle and Motorcycle classes (both a vehicle and a motorcycle 
have an engine). The class stores the engine type.

### Unrelated Class: DealershipMenu
The unrelated class for this program is DealershipMenu. It does not inherit from any of the other classes. It provides
the functionality for user account creation and login, vehicle and motorcycle customization options prompts, and calls the appropriate methods
to create instances of vehicle and/or motorcycle objects using user-defined arguments. User input is validated, and it provides functionality to
customize as many vehicles and motorcycles as the user would like to.

