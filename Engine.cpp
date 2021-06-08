#include "Engine.h"

/************************** Engine class definitions *******************/

// constructors
Engine::Engine() {
    engine = "standard";
}

Engine::Engine(string eng) {
    setEngineType(eng);
}

// getter
string Engine::getEngineType() const {
    return engine;
}

// setter
void Engine::setEngineType(string engineType) {
    engine = engineType;
}
