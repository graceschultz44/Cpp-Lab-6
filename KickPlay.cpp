//
// Created by casha on 4/18/23.
//

#include "KickPlay.h"

KickPlay::KickPlay(){
   // empty
};

KickPlay::~KickPlay() {
    delete yardsMoved; // delete yardsMoved
}

KickPlay::KickPlay(const KickPlay &copyClass2) {
    delete yardsMoved;
    yardsMoved = new int(*copyClass2.yardsMoved); // create new
}

KickPlay &KickPlay::operator=(const KickPlay &copy2) {
    if (this != &copy2) {
        delete yardsMoved;
        yardsMoved = new int;
        *yardsMoved = *(copy2.yardsMoved);
    }
    return *this;
}

void KickPlay::start() {
    int RandIndex = rand() % 2; // chooses 0 or 1
    setYardsMoved(RandIndex); // sets yardsMoved to 0 or 1

    Print(); // calls Print
}

void KickPlay::Print() {
    int yards = getYardsMoved();

    if (yards == 0) {
        cout << "Kick no good." << endl;
    }
    else if (yards == 1) {
        cout << "Kick good for 3 Points!" << endl;
    }
}