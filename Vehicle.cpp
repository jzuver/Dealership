#include "Vehicle.h"

/***************** Vehicle Class Definitons ****************/

// default constructor
Vehicle::Vehicle() {
    color = "default";
    make  = "default";
    model = "default";
    engine = Engine();
}

// non-default constructor
Vehicle::Vehicle(string color, string make, string model, Engine engine) {
    setColor(color);
    setMake(make);
    setModel(model);
    setEngine(engine);
}

// getters
string Vehicle::getColor() const {
    return color;
}

string Vehicle::getMake() const {
    return make;
}

string Vehicle::getModel() const {
    return model;
}

Engine Vehicle::getEngine() const {
    return engine;
}

// setters
void Vehicle::setColor(string color) {
    this->color = color;
}

void Vehicle::setMake(string make) {
    this->make = make;
}

void Vehicle::setModel(string model) {
    this->model = model;
}

void Vehicle::setEngine(Engine engine) {
    this->engine = engine;
}

ostream& operator << (ostream& outs, Vehicle &vehicle){
    outs << "\nVehicle Make: " << vehicle.getMake() + "\n";
    outs << "Vehicle Model: "<< vehicle.getModel() + "\n";
    outs << "Vehicle Color: " << vehicle.getColor() + "\n";
    outs << "Vehicle Engine: " << vehicle.getEngine().getEngineType() << endl;
    return outs;
}


