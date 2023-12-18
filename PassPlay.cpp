//
// Created by casha on 4/18/23.
//

#include "PassPlay.h"

PassPlay::PassPlay() {
    //empty
}
PassPlay::~PassPlay() {
    delete yardsMoved; // deletes yardsMoved
}

PassPlay::PassPlay(const PassPlay &copyClass1) {
    delete yardsMoved;
    yardsMoved = new int(*copyClass1.yardsMoved); // creates new
}

PassPlay &PassPlay::operator=(const PassPlay &copy1) {
    if (this != &copy1) {
        delete yardsMoved;
        yardsMoved = new int;
        *yardsMoved = *(copy1.yardsMoved);
    }
    return *this;
}

void PassPlay::start() {
    srand(time(NULL)); // seeds number generator

    const int passArray[10] = {static_cast<int>(-10), static_cast<int>(-5), static_cast<int>(0), static_cast<int>(0),
                              static_cast<int>(5), static_cast<int>(10), static_cast<int>(15), static_cast<int>(20),
                              static_cast<int>(25), static_cast<int>(30)};
    int randomPass = rand() % 10; // chooses number from array
    setYardsMoved(passArray[randomPass]); //set yardsMoved to random value from the list in the instructions
}

void PassPlay::Print() {
    cout << "Run play for " << getYardsMoved() << " yards" << endl; // for summary
}