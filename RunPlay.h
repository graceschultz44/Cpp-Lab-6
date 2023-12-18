//
// Created by casha on 4/18/23.
//

#ifndef PROGRAM6_TEMPLATE_RUNPLAY_H
#define PROGRAM6_TEMPLATE_RUNPLAY_H
#include "Play.h"

class RunPlay: public Play {
public:
    virtual void start() override;

    virtual void Print() override;

    RunPlay();

    ~RunPlay();

    RunPlay& operator=(const RunPlay &copy3);

    RunPlay(const RunPlay &copyClass3);
};

#endif //PROGRAM6_TEMPLATE_RUNPLAY_H