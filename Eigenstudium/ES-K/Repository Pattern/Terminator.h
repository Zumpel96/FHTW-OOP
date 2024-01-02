#ifndef REPOSITORY_PATTERN_TERMINATOR_H
#define REPOSITORY_PATTERN_TERMINATOR_H

#include "Bot.h"

class Terminator : public Bot{
public:
    Terminator(int maxEnergy, int consumption, std::string name);
};

#endif //REPOSITORY_PATTERN_TERMINATOR_H
