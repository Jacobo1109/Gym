#include "Workout.h"

Workout::Workout() : type("") {}

Workout::Workout(std::string t, const std::vector<Exercises*>& e) : type(t), exercises(e) {}

std::string Workout::getType() const { return type; }
void Workout::setType(const std::string& t) { type = t; }

std::vector<Exercises*> Workout::getExercises() const { return exercises; }
void Workout::setExercises(const std::vector<Exercises*>& e) { exercises = e; }

Workout::~Workout() {
    for (Exercises* e : exercises) {
        delete e;
    }
}
