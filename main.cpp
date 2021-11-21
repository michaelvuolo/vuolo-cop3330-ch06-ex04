/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Vuolo
 */

#include <iostream>
#include <string>
#include <vector>
#include "Name_value.cpp"

using namespace std;

int main() {
    // init variables
    string name;
    int score;
    bool shouldTerminate = false;
	vector<Name_value> nameList;

    // read name and score from user
    cout << "Name and score (Enter \"NoName 0\" to terminate): ";
    cin >> name >> score;

    // loop until user enters "NoName 0"
    while (name.compare("NoName") != 0 && score != 0) {
        for (int i = 0; i < nameList.size(); i++) {
            // check if name has already been entered
            if (name == nameList[i].name) {
                cout << "Name already entered.\n";
                shouldTerminate = 1;
                break;
            }
         }
         if (shouldTerminate == 1)
            break;

        // add name and score to vector
        Name_value tempNameValue(name, score);
        nameList.push_back(tempNameValue);

        // read name and score from user (again)
        cout << "Name and score (Enter \"NoName 0\" to terminate): ";
        cin >> name >> score;
    }

    // display name list
    cout << "\nName list:\n";
    for (int i = 0; i < nameList.size(); i++)
        cout << nameList[i].name << " " << nameList[i].score << "\n";

    return 0;
}