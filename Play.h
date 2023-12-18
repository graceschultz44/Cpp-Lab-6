//
// Created by Ken Howard on 4/11/23.
//

#ifndef PROGRAM6_TEMPLATE_PLAY_H
#define PROGRAM6_TEMPLATE_PLAY_H
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

class Play {
public:
    Play();

    ~Play();

    Play(const Play &copyClass);

    Play& operator=(const Play &copy);

    void setYardsMoved(int theYardsMoved);

    int getYardsMoved();

    virtual void start();

    virtual void Print();

protected:
    int *yardsMoved;
};

#endif //PROGRAM6-TEMPLATE_PLAY_H