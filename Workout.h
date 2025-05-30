#ifndef WORKOUT_H
#define WORKOUT_H

#include <string>
#include <vector>
#include "Exercises.h"

class Workout {
private:
    std::string type;
    std::vector<Exercises*> exercises;

public:
    Workout();
    Workout(std::string, const std::vector<Exercises*>&);

    std::string getType() const;
    void setType(const std::string&);

    std::vector<Exercises*> getExercises() const;
    void setExercises(const std::vector<Exercises*>&);

    ~Workout();
};

#endif
