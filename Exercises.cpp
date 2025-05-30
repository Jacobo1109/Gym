#include "Exercises.h"

Exercises::Exercises() : repetitions(0), sets(0), weight(0) {}

Exercises::Exercises(int r, int s, int w) : repetitions(r), sets(s), weight(w) {}

int Exercises::getRepetitions() const { return repetitions; }
void Exercises::setRepetitions(int r) { repetitions = r; }

int Exercises::getSets() const { return sets; }
void Exercises::setSets(int s) { sets = s; }

int Exercises::getWeight() const { return weight; }
void Exercises::setWeight(int w) { weight = w; }
