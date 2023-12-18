//
// Created by casha on 4/18/23.
//

#ifndef PROGRAM6_TEMPLATE_PASSPLAY_H
#define PROGRAM6_TEMPLATE_PASSPLAY_H
#include "Play.h"

class PassPlay: public Play {
public:
    PassPlay();

    ~PassPlay();

    PassPlay& operator=(const PassPlay &copy1);

    PassPlay(const PassPlay &copyClass1);

    virtual void start() override;

    virtual void Print() override;
};

#endif //PROGRAM6_TEMPLATE_PASSPLAY_H