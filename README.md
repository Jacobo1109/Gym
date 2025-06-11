# Gym
This project is going to be elaborated with the use of C++ and it is focused in Object-Oriented, using this we will be able to simulate the network of a local GYM where we will have the opportunity per user to find out the workouts available, the exercises, the coach that will be leading him or she and the progress this user will be achieving with the pass of time. We can make this program with the creation of 5 classes, we will have the class of the user, workout, the exercise, the progress and the coach; In order for this class to work, they will be added to a main file so the data can be given for every parameter shown.
# Why
I decided to do this program, because I really enjoy going to the gym and I have noticed that some people suffer from not having a workout in mind or which exercises they must do in order to progress, so making a programm that can provide this information to the user would make the difference for most people.
# How?
I will be able to make this work with the use and creation of various classes, basic functions, pointers, polimorphysm, and more. Making use of the classes will allow to have a proper organization of the basic and most important information that will be shown.
# Classes

# Workout
The Workout class adds a list of Exercise pointers and represents a full workout session, it allows adding different types of exercises (push, pull, inferior) and uses polymorphism to retrieve each exercise’s information. 
# Exercise
The exercise class provides common attributes like repetitions, sets, and weight, along with virtual methods to be overridden by specific types of workouts. This class establishes abstraction and enables polymorphism.
# Inferior
Inherits from Exercise and defines a lower-body workout focusing on legs and calves.
# Push
It inherits from Exercise and represents a push-type workout, focusing on chest and triceps. It defines two specific exercises per muscle group and overrides the getInfo() method to return detailed workout information.
# Pull
It inherits from Exercise and models a pull-type workout, targeting back and biceps.
# Main
The main is the part were everything will come together and the classes wwill be getting used.

![image](https://github.com/user-attachments/assets/956309ee-808a-4707-b4fa-7a7c3d32ac03)
