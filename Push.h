#ifndef PUSH_H
#define PUSH_H

#include "Exercise.h"
#include <vector>

// Concrete class for Push workout
class Push : public Exercise {
private:
    // Two muscle groups with 2 exercises each
    vector<string> chest;
    vector<string> tricep;

public:
    // Constructor initializes exercises
    Push();

    // Overrides getInfo from base class
    string getInfo() override;
};

#endif
