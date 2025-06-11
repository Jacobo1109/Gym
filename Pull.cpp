#include "Pull.h"

// Constructor initializes pull-day exercises
Pull::Pull() {
    back = {"Lat Pulldown", "Deadlift"};
    bicep = {"Barbell Curl", "Hammer Curl"};
}

// Returns string with pull workout
string Pull::getInfo() {
    string result = "-- Pull Workout --\nBack Exercises:\n";
    for (int i = 0; i < back.size(); i++) result += "- " + back[i] + "\n";
    result += "Bicep Exercises:\n";
    for (int i = 0; i < bicep.size(); i++) result += "- " + bicep[i] + "\n";
    return result;
}
