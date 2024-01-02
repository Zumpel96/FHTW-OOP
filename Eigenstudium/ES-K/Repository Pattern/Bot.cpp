#include "Bot.h"

std::string Bot::getName() const {
    return name;
}

void Bot::consumeEnergy() {
    if(curEnergy <= 0)
    {
        return;
    }

    curEnergy--;
}

Bot::Bot(int maxEnergy, int consumption, std::string name) : maxEnergy(maxEnergy), consumption(consumption), name(name) {

}

Bot *Bot::clone() const {
    return new Bot(*this);
}
