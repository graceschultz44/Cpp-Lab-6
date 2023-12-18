//
// Created by Ken Howard on 4/11/23.
//
#include "Scrimmage.h"
#include "Team.h"

void Scrimmage::printReplay() {
    teamVec.at(0).replay(); //Call the replay function for each team
    teamVec.at(1).replay(); //Call the replay function for each team
}

Scrimmage::Scrimmage() {
    string team1Name;
    string team2Name;

    cout << "Enter name for team #1: " << endl; //Prompt for name of each team
    cin >> team1Name;
    cout << "Enter name for team #2: " << endl; //Prompt for name of each team
    cin >> team2Name;

    Team team1(team1Name); //Create two team objects
    Team team2(team2Name); //Create two team objects

    teamVec.push_back(team1); //Add teams to the teams vector
    teamVec.push_back(team2); //Add teams to the teams vector
}

void Scrimmage::play() {
    bool flag = true; // set equal to true

    while(true) { // loop until game ends
        int turn = flag ? 0 : 1; // has both team options
        cout << teamVec.at(turn).getName() << " turn" << endl;
        teamVec.at(turn).takeTurn(); //   Call takeTurn for each team
        printScoreboard(); //   Call printScoreboard after each team's turn

        int score = teamVec.at(turn).getScore(); // gets the score

        if (score >= 12) { //   If the team's score is >= 12, declare winner and end the game
            cout << teamVec.at(turn).getName() << " won!! Game over" << endl;
            break;
        }
        flag = !flag;
    }
}

void Scrimmage::printScoreboard() {
    cout << "SCOREBOARD" << endl;
    // print the team name and score of each team
    cout << teamVec.at(0).getScore() << "     " << teamVec.at(0).getName() << endl;
    cout << teamVec.at(1).getScore() << "     " << teamVec.at(1).getName() << endl;
};