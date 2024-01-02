#include "BotFactory.h"

BotFactory::BotFactory() {
    // Terminators
    botPrototypes[T600] = new Terminator(80, 4, "T600");
    botPrototypes[T800] = new Terminator(120, 5, "T800");
    botPrototypes[T1000] = new Terminator(150, 7, "T1000");

    // Protocol Droids
    botPrototypes[Alexa] = new ProtocolDroid(100, 2, "Alexa");
    botPrototypes[GoogleAssistant] = new ProtocolDroid(110, 3, "GoogleAssistant");
    botPrototypes[Siri] = new ProtocolDroid(60, 1, "Siri");
}

BotFactory::~BotFactory() {
    for(int i = 0; i < NUMBER_OF_BOT_TYPES; i++)
    {
        delete botPrototypes[i];
    }
}

Bot *BotFactory::getInstance(BotType botType) {
    return botPrototypes[botType]->clone();
}