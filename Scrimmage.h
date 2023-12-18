//
// Created by Ken Howard on 4/11.
//

#ifndef PROGRAM6_TEMPLATE_SCRIMMAGE_H
#define PROGRAM6_TEMPLATE_SCRIMMAGE_H
#include "Team.h"
#include <iostream>

class Scrimmage {
public:
    Scrimmage();

    void play();

    void printScoreboard();

    void printReplay();

private:
    vector<Team> teamVec;
};

#endif //PROGRAM6-TEMPLATE_SCRIMMAGE_H