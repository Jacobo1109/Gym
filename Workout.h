#ifndef WORKOUT_H
#define WORKOUT_H

#include "Exercise.h"
#include <vector>

// This class aggregates multiple Exercise pointers
class Workout {
protected:
    string type;                      // Type of workout: Push, Pull, Inferior
    vector<Exercise*> exercises;      // Aggregation of Exercises (pointers)

public:
    Workout();
    Workout(string, vector<Exercise*>);

    void setType(string);
    void setExercises(vector<Exercise*>);
    void addExercise(Exercise*);

    // Operator overloading to add an Exercise pointer
    Workout& operator+(Exercise*);

    string getWorkoutInfo();

    ~Workout(); 
};

#endif
