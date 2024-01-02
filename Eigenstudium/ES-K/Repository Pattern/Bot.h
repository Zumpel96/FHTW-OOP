#ifndef REPOSITORY_PATTERN_BOT_H
#define REPOSITORY_PATTERN_BOT_H

#include <string>

class Bot {
public:
    Bot(int maxEnergy, int consumption, std::string name);
    void consumeEnergy();
    std::string getName() const;
    Bot* clone() const;

protected:
    int maxEnergy;
    int curEnergy;
    int consumption;
    std::string name;
};

#endif //REPOSITORY_PATTERN_BOT_H
