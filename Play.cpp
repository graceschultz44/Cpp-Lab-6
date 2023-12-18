//
// Created by Ken Howard on 4/11/23.
//
#include "Play.h"

Play::Play() {
    int number = 0;
    this->yardsMoved = &number;
}

Play::~Play() {
    delete this->yardsMoved; // deletes this yardsMoved
}

Play::Play(const Play &copyClass) {
    delete this->yardsMoved;
    this->yardsMoved = new int(*copyClass.yardsMoved);
}

Play &Play::operator=(const Play &copy) {
    if (this != &copy) {
        delete this->yardsMoved;
        this->yardsMoved = new int;
        *(this->yardsMoved) = *(copy.yardsMoved);
    }
    return *this;
}

void Play::setYardsMoved(int yardsMoved) { this->yardsMoved = new int(yardsMoved); }

int Play::getYardsMoved() { return *yardsMoved; }

void Play::start() {
    // overrode
}

void Play::Print() {
    //overrode
}