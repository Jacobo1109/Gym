#ifndef PULL_H
#define PULL_H

#include "Exercise.h"
#include <vector>

// Class for Pull workout
class Pull : public Exercise {
private:
    // Back and bicep exercises
    vector<string> back;
    vector<string> bicep;

public:
    Pull();
    string getInfo() override;
};

#endif
