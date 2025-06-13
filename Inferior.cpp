#include "Inferior.h"

// Constructor initializes leg-focused exercises
Inferior::Inferior() {
    legs = {"Squats sets() reps()", "Lunges sets() reps()"};
    calves = {"Standing Calf Raise sets() reps()", "Seated Calf Raise sets() reps()"};
}

// Return string with workout
string Inferior::getInfo() {
    string result = "-- Inferior Workout --\nLeg Exercises:\n";
    for (int i = 0; i < legs.size(); i++) result += "- " + legs[i] + "\n";
    result += "Calf Exercises:\n";
    for (int i = 0; i < calves.size(); i++) result += "- " + calves[i] + "\n";
    return result;
}
