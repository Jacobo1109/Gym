#include "Push.h"

// Initialize specific exercises for Push day
Push::Push() {
    chest = {"Bench Press sets() reps()", "Chest Fly sets() reps()"};
    tricep = {"Tricep Dips sets() reps()", "Overhead Extension sets() reps()"};
}

// Override base class method to return custom info
string Push::getInfo() {
    string result = "-- Push Workout --\nChest Exercises:\n";
    for (int i = 0; i < chest.size(); i++) result += "- " + chest[i] + "\n";
    result += "Tricep Exercises:\n";
    for (int i = 0; i < tricep.size(); i++) result += "- " + tricep[i] + "\n";
    return result;
}
