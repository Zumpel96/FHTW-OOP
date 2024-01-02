#include <iostream>
#include "BotFactory.h"

int main() {
    BotFactory* botFactory = new BotFactory();

    Bot* myBots[10] = { nullptr };
    myBots[0] = botFactory->getInstance(T600);
    myBots[1] = botFactory->getInstance(T800);
    myBots[2] = botFactory->getInstance(Siri);

    for(int i = 0; i < 10; i++)
    {
        if(myBots[i] == nullptr)
        {
            continue;
        }

        std::cout << myBots[i]->getName() << std::endl;
    }

    delete botFactory;
}
