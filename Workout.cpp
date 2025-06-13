#include "Workout.h"

// Constructor
Workout::Workout() : type(""), exercises() {}

// Overloaded constructor
Workout::Workout(string t, vector<Exercise*> e) : type(t), exercises(e) {}

// Setters
void Workout::setType(string t) { type = t; }
void Workout::setExercises(vector<Exercise*> e) { exercises = e; }

// Adds a new exercise to the list (aggregation)
void Workout::addExercise(Exercise* e) {
    exercises.push_back(e);
}

// Operator overloading: adds an exercise using +
Workout& Workout::operator+(Exercise* e) {
    addExercise(e);
    return *this;
}

// Combine and return info of all exercises
string Workout::getWorkoutInfo() {
    string output;
    for (int i = 0; i < exercises.size(); i++) {
        output += exercises[i]->getInfo() + "\n";
    }
    return output;
}

// Destructor
Workout::~Workout() {
    for (int i = 0; i < exercises.size(); i++) {
        delete exercises[i];
    }
}
