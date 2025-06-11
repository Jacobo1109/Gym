#ifndef INFERIOR_H
#define INFERIOR_H

#include "Exercise.h"
#include <vector>

// Class for Lower-body workout
class Inferior : public Exercise {
private:
    vector<string> legs;
    vector<string> calves;

public:
    Inferior();
    string getInfo() override;
};

#endif
