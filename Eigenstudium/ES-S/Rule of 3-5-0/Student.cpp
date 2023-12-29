#include "Student.h"

Student::Student(std::string name) {
    this->name = name;
}

std::string Student::getName() const {
    return name;
}
