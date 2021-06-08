#include "Motorcycle.h"

/********************** Motorcycle class definitions *******************/

// constructors
Motorcycle::Motorcycle() {
    color = "default";
    make = "default make";
    model = "default model";
    engine = Engine();
    accessory = "default accessory";
}

Motorcycle::Motorcycle(string color, string make, string model, Engine engine, string accessory) {
    setColor(color);
    setMake(make);
    setModel(model);
    setEngine(engine);
    setAccessory(accessory);
}

// getter
string Motorcycle::getAccessory() const {
    return accessory;
}

// setter
void Motorcycle::setAccessory(string accessory) {
    this->accessory = accessory;
}

ostream& operator << (ostream& outs, Motorcycle &motorcycle){
        outs << "\nMotorcycle Make: " << motorcycle.getMake() + "\n";
        outs << "Motorcycle Model: "<< motorcycle.getModel() + "\n";
        outs << "Motorcycle Color: " << motorcycle.getColor() + "\n";
        outs << "Motorcycle Engine: " << motorcycle.getEngine().getEngineType() + "\n";
        outs << "Motorcycle Accessory: " << motorcycle.getAccessory() << endl;
        return outs;
}