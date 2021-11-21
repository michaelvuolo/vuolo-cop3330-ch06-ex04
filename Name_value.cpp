/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Vuolo
 */

#include <iostream>
#include <string>

using namespace std;

class Name_value {
    public:
        // init variables
        string name;
        int score;
        
        // constructor
        Name_value(string incomingName, int incomingScore) {
            name = incomingName;
            score = incomingScore;
        }
};