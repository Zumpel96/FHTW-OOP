#ifndef REPOSITORY_PATTERN_PROTOCOLDROID_H
#define REPOSITORY_PATTERN_PROTOCOLDROID_H

#include "Bot.h"

class ProtocolDroid : public Bot{
public:
    ProtocolDroid(int maxEnergy, int consumption, std::string name);
};

#endif //REPOSITORY_PATTERN_PROTOCOLDROID_H
