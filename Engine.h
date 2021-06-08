
#ifndef M2OEP_CLASS_RELATIONSHIPS_JZUVER_ENGINE_H
#define M2OEP_CLASS_RELATIONSHIPS_JZUVER_ENGINE_H
#include <string>
using std::string;

class Engine{
private:
    string engine;
public:

    /**
    * Default constructor
    * Requires: nothing
    * Modifies: engineType field
    * Effects: calls parent sets field to default value
    */
    Engine();

    /**
    * Non-Default constructor
    * Requires: engineType argument
    * Modifies: engineType field
    * Effects: sets engine type to passed in value
    */
    Engine(string eng);

    /**
    * Requires: nothing
    * Modifies: nothing
    * Effects: returns engineType field
    */
    string getEngineType() const;

    /**
    * Requires: engineType argument
    * Modifies: engineType field
    * Effects: sets engineType field to passed in value
    */
    void setEngineType(string engineType);


};


#endif //M2OEP_CLASS_RELATIONSHIPS_JZUVER_ENGINE_H
