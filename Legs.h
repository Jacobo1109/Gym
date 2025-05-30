#ifndef LEGS_H
#define LEGS_H

#include "Exercises.h"
#include <string>

class Legs : public Exercises {
private:
    std::string legs;
    std::string calves;

public:
    Legs();
    Legs(std::string, std::string);

    std::string getLegs() const;
    void setLegs(const std::string&);

    std::string getCalves() const;
    void setCalves(const std::string&);
};

#endif
