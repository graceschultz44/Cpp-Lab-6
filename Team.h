//
// Created by casha on 4/18/23.
//

#ifndef PROGRAM6_TEMPLATE_TEAM_H
#define PROGRAM6_TEMPLATE_TEAM_H

#include <string>
#include <vector>
#include "Play.h"
#include "KickPlay.h"
#include "RunPlay.h"
#include "PassPlay.h"
using namespace std;

class Team {
public:
    Team(string s);

    string getName() const;

    void setName(string name);

    int getScore() const;

    void setScore(int score);

    void takeTurn();

    void replay();

private:
    string* name;
    int* score;
    vector<Play*> playVec; // create a vector containing play objects
};

#endif //PROGRAM6_TEMPLATE_TEAM_H