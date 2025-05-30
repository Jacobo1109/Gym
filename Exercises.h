#ifndef EXERCISES_H
#define EXERCISES_H

class Exercises {
protected:
    int repetitions;
    int sets;
    int weight;

public:
    Exercises();
    Exercises(int, int, int);

    int getRepetitions() const;
    void setRepetitions(int);

    int getSets() const;
    void setSets(int);

    int getWeight() const;
    void setWeight(int);

    virtual ~Exercises() = default;
};

#endif
