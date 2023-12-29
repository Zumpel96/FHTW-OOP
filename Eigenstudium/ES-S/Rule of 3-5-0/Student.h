#ifndef RULE_OF_3_5_0_STUDENT_H
#define RULE_OF_3_5_0_STUDENT_H

#include <string>

class Student {
public:
    Student(std::string name);
    std::string getName() const;

private:
    std::string name;
};

#endif //RULE_OF_3_5_0_STUDENT_H
