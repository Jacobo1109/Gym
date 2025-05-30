#ifndef PULL_H
#define PULL_H

#include "Exercises.h"
#include <string>

class Pull : public Exercises {
private:
    std::string back;
    std::string bicep;

public:
    Pull();
    Pull(std::string, std::string);

    std::string getBack() const;
    void setBack(const std::string&);

    std::string getBicep() const;
    void setBicep(const std::string&);
};

#endif
