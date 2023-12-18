//
// Created by Ken Howard on 4/11/23.
//
#include "Team.h"

Team::Team(string s) {
    name = new string(s); // initialize name to string passed in
    score = new int(0); // set score equal to zero
}

void Team::setName(string name) { *this->name = name; }

void Team::setScore(int score) { *this->score = score; }

string Team::getName() const { return *name; }

int Team::getScore() const { return *score; }

void Team::replay() {
    cout << "Play summary for " << this->getName() << ":" << endl;

    for(int i = 0; i < playVec.size(); i++) { //Loop through plays vector and call print for all Play objects
        playVec.at(i)->Print();
    }
}

void Team::takeTurn() {
    string command;
    int location = 20;
    int downCounter = 1;
    int target = location + 10;
    int yardsNeeded;
    int theYardsMoved;
    bool isKicked = false;

    while (true) { // loops until the turn ends
        cout << "Ball at: " << location << "   Down #" << downCounter << endl;
        Play* play;
        if (location >= 70) {
            cout << "Run, Pass, or Kick (R/P/K)" << endl;
            cin >> command;
            if (command == "r") {
                play = new RunPlay();
            }
            else if (command == "p") {
                play = new PassPlay();
            }
            else if (command == "k") {
                play = new KickPlay();
                isKicked = true;
            }
            else {
                cout << "Not a valid input" << endl;
            }
        }
        else {
            cout << "Run or Pass(R/P)" << endl; //Prompt user for (P)ass or (R)un play
            cin >> command;
            if (command == "p") {
                play = new PassPlay();
            }
            else if (command == "r") {
                play = new RunPlay();
            }
        }
        play->start(); // calls start of chosen command
        playVec.push_back(play); // adds it to vector
        if (isKicked) { // adds to score if the kick was successful
            if(play->getYardsMoved() ==  1){
                *score+=3;
            }
            break; // ends turn
        }
        theYardsMoved = play->getYardsMoved(); // get yards moved from the play class
        if (theYardsMoved > 0) {
            cout << "Moved " << theYardsMoved << " yards" << endl;
        } else if (theYardsMoved < 0) {
            cout << "Moved back " << (theYardsMoved * -1) << " yards" << endl;
        } else if (theYardsMoved == 0) {
            cout << "No yards" << endl;
        }

        location += theYardsMoved; // update location

        if (location >= 100) { // checks to see if a touchdown was made
            cout << "Touchdown!" << endl;
            *score += 6;
            break;
        }
        else {
            if (location < target) {
                downCounter++; // increments the down counter
            }
            if (downCounter > 4) {
                cout << "Turn over" << endl; // 4 downs means that turn is over
                break;
            } else if (location >= target) {
                target = location + 10;
            }
        }
        yardsNeeded = target - location;
        cout << yardsNeeded << " yards to 1st down" << endl; // print yards needed for 1
    }
}