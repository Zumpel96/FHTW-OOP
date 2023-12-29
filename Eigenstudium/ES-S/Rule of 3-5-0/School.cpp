#include "School.h"
#include <iostream>

School::School(std::string name) {
    this->name = name;
}

void School::addStudent(std::string name) {
    Student* student = new Student(name);
    students.push_back(student);
}

School::~School() {
    deleteStudents();
}

School::School(const School &other) {
    this->name = other.name;
    copyStudents(other.students);
}

School &School::operator=(const School &other) {
    if (this != &other) {
        deleteStudents();
        name = other.name;
        copyStudents(other.students);
    }

    return *this;
}

School::School(School &&other) noexcept {
    deleteStudents();
    this->name = std::move(other.name);
    this->students = std::move(other.students);
}

School &School::operator=(School &&other) noexcept {
    if (this != &other) {
        deleteStudents();
        this->name = std::move(other.name);
        this->students = std::move(other.students);
    }

    return *this;
}

void School::copyStudents(const std::vector<Student *> &other) {
    for(const auto& student : other) {
        this->students.push_back(new Student(*student));
    }
}

void School::deleteStudents() {
    for(auto& student : students) {
        delete student;
    }
    students.clear();
}

void School::printSchool() const {
    std::cout << "School: " << name << std::endl;
    std::cout << "Students: " << std::endl;

    int i = 1;
    for(auto& student : students) {
        std::cout << "  " << i++ << ". - " << student->getName() << " (" << &student << ")" << std::endl;
    }
    std::cout << std::endl;
}

void School::setName(std::string name) {
    this->name = name;
}
