//
// Created by casha on 4/18/23.
//

#ifndef PROGRAM6_TEMPLATE_KICKPLAY_H
#define PROGRAM6_TEMPLATE_KICKPLAY_H
#include "Play.h"

class KickPlay: public Play {
public:
    KickPlay();

    ~KickPlay();

    KickPlay& operator=(const KickPlay &copy2);

    KickPlay(const KickPlay &copyClass2);

    virtual void start() override;

    virtual void Print() override;
};

#endif //PROGRAM6_TEMPLATE_KICKPLAY_H