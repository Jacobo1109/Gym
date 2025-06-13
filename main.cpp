#include "Push.h"
#include "Pull.h"
#include "Inferior.h"
#include "Workout.h"
#include <iostream>
#include <string>
using namespace std;

// Helper to get validated input from user
int getValidatedInput(int min, int max) {
    int input;
    string line;
    while (true) {
        getline(cin, line);
        try {
            input = stoi(line);
            if (input >= min && input <= max) return input;
        } catch (...) {}
        cout << "Invalid input. Enter a number between " << min << " and " << max << ": ";
    }
}

// Builds a Workout object based on the user option (uses polymorphism)
Workout buildWorkout(int option) {
    Workout workout;

    if (option == 1) {
        workout.setType("Push");
        Exercise* ex = new Push(); // Polymorphism via base class pointer
        workout.addExercise(ex);
    } else if (option == 2) {
        workout.setType("Pull");
        Exercise* ex = new Pull();
        workout.addExercise(ex);
    } else if (option == 3) {
        workout.setType("Inferior");
        Exercise* ex = new Inferior();
        workout.addExercise(ex);
    }

    return workout;
}

// Main function with interaction and polymorphic behavior
int main() {
    cout << "Choose your workout type:" << endl;
    cout << "1. Push (Chest, Shoulders, Triceps)" << endl;
    cout << "2. Pull (Back, Biceps)" << endl;
    cout << "3. Inferior (Legs, Glutes)" << endl;
    cout << "Enter choice (1-3): ";

    int choice = getValidatedInput(1, 3);

    Workout workout = buildWorkout(choice);

    cout << "\n=== Your Workout Plan ===" << endl;
    cout << workout.getWorkoutInfo() << endl;

    return 0;
}
