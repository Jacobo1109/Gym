#include "Push.h"
#include "Pull.h"
#include "Inferior.h"
#include "Workout.h"
#include <iostream>
using namespace std;

// Builds a Workout object based on the user option
Workout buildWorkout(int option) {
    Workout workout;

    if (option == 1) {
        workout.setType("Push");
        workout.addExercise(new Push()); // Push-type exercises
    } else if (option == 2) {
        workout.setType("Pull");
        workout.addExercise(new Pull()); // Pull-type exercises
    } else if (option == 3) {
        workout.setType("Inferior");
        workout.addExercise(new Inferior()); // Inferior-type exercises
    }

    return workout;
}

// This function simulates selection and returns the workout information
string simulateWorkoutSelection(int option) {
    Workout workout = buildWorkout(option);
    return workout.getWorkoutInfo(); // Return the generated workout info
}

// Main function with output to the terminal using cout
int main() {
    // Simulate selection of a workout type
    int selectedWorkout = 1; // Example: 1 for Push, can be changed to 2 or 3

    // Get the workout information based on the selection
    string workoutInfo = simulateWorkoutSelection(selectedWorkout);

    // Output
    cout << workoutInfo << endl;

    return 0;
}
