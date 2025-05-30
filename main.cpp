#include "Workout.h"
#include "Legs.h"
#include "Push.h"
#include "Pull.h"
#include <vector>

int main() {
    // Crear ejercicios individuales
    Exercises* legExercise = new Legs("Squats", "Standing Calf Raises");
    legExercise->setRepetitions(12);
    legExercise->setSets(4);
    legExercise->setWeight(100);

    Exercises* pushExercise = new Push("Bench Press", "Tricep Dips");
    pushExercise->setRepetitions(10);
    pushExercise->setSets(3);
    pushExercise->setWeight(80);

    Exercises* pullExercise = new Pull("Deadlift", "Barbell Curls");
    pullExercise->setRepetitions(8);
    pullExercise->setSets(5);
    pullExercise->setWeight(120);

    // Crear un vector de ejercicios
    std::vector<Exercises*> exercises = { legExercise, pushExercise, pullExercise };

    // Crear un entrenamiento
    Workout workout("Full Body", exercises);

    return 0;
}
