//
// Created by casha on 4/18/23.
//

#include "RunPlay.h"

RunPlay::RunPlay(){
    // empty
}

RunPlay::~RunPlay() {
    delete yardsMoved; // delete yardsMoved
}

RunPlay::RunPlay(const RunPlay &copyClass3) {
    delete yardsMoved;
    yardsMoved = new int(*copyClass3.yardsMoved);
}

RunPlay &RunPlay::operator=(const RunPlay &copy3) {
    if (this != &copy3) {
        delete yardsMoved;
        yardsMoved = new int;
        *yardsMoved = *(copy3.yardsMoved);
    }
    return *this;
}

void RunPlay::start() {
    srand(time(NULL)); // seeds number generator

    const int runArray[10] = {static_cast<int>(-5), static_cast<int>(-3), static_cast<int>(-1),
                               static_cast<int>(1), static_cast<int>(2), static_cast<int>(4), static_cast<int>(5),
                               static_cast<int>(6), static_cast<int>(8), static_cast<int>(9)};
    int randomRun = rand() % 10; // chooses a number from the array
    setYardsMoved(runArray[randomRun]); // set yardsMoved to random value from the list in the instructions
}

void RunPlay::Print() {
    cout << "Run play for " << getYardsMoved() << " yards" << endl; // for summary
}
