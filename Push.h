#ifndef PUSH_H
#define PUSH_H

#include "Exercises.h"
#include <string>

class Push : public Exercises {
private:
    std::string chest;
    std::string tricep;

public:
    Push();
    Push(std::string, std::string);

    std::string getChest() const;
    void setChest(const std::string&);

    std::string getTricep() const;
    void setTricep(const std::string&);
};

#endif
