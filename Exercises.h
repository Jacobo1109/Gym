#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
using namespace std;

// Abstract class representing a generic exercise
class Exercise {
protected:
    // Protected attributes to allow inheritance
    int repetitions;
    int sets;
    int weight;

public:
    // Constructor
    Exercise();

    // Overloaded constructor with parameters
    Exercise(int reps, int sets, int weight);

    // Getters
    int getRepetitions();
    int getSets();
    int getWeight();

    // Setters
    void setRepetitions(int reps);
    void setSets(int sets);
    void setWeight(int weight);

    //  Virtual method
    virtual string getInfo() = 0;

    // Overloaded method (demonstrates method overloading)
    virtual string getInfo(bool detailed);

    // Virtual destructor to allow proper cleanup of derived classes
    virtual ~Exercise() {}
};

#endif
