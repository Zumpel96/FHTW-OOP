#ifndef REPOSITORY_PATTERN_BOTFACTORY_H
#define REPOSITORY_PATTERN_BOTFACTORY_H

#define NUMBER_OF_BOT_TYPES 6

#include "Bot.h"
#include "Terminator.h"
#include "ProtocolDroid.h"

enum BotType {
    T600,
    T800,
    T1000,
    Alexa,
    GoogleAssistant,
    Siri,
};

class BotFactory {
public:
    BotFactory();
    ~BotFactory();

    Bot* getInstance(BotType botType);

private:
    Bot* botPrototypes[NUMBER_OF_BOT_TYPES];
};

#endif //REPOSITORY_PATTERN_BOTFACTORY_H
