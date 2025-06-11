#include "Exercise.h"

// Constructor
Exercise::Exercise() : repetitions(0), sets(0), weight(0) {}

// Constructor with parameters
Exercise::Exercise(int reps, int sets, int wt) : repetitions(reps), sets(sets), weight(wt) {}

// Getters
int Exercise::getRepetitions() { return repetitions; }
int Exercise::getSets() { return sets; }
int Exercise::getWeight() { return weight; }

// Setters
void Exercise::setRepetitions(int reps) { repetitions = reps; }
void Exercise::setSets(int s) { sets = s; }
void Exercise::setWeight(int wt) { weight = wt; }

// Overloaded method that returns info
string Exercise::getInfo(bool detailed) {
    if (detailed) {
        return "Reps: " + to_string(repetitions) + ", Sets: " + to_string(sets) + ", Weight: " + to_string(weight) + "kg\n";
    } else {
        return "Basic exercise information.\n";
    }
}
