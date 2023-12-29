#ifndef RULE_OF_3_5_0_SCHOOL_H
#define RULE_OF_3_5_0_SCHOOL_H

#include <vector>
#include <string>
#include "Student.h"

class School {
public:
    School(std::string name);

    /// RULE OF THREE
    // Destructor
    ~School();

    // Copy Constructor
    School(const School& other);

    // Copy Assignment Operator
    School& operator=(const School& other);

    /// RULE OF FIVE
    // Move Constructor
    School(School&& other) noexcept;

    // Move Assignment Operator
    School& operator=(School&& other) noexcept;

    /// LOGIC
    void addStudent(std::string name);
    void setName(std::string name);
    void printSchool() const;

private:
    std::vector<Student*> students;
    std::string name;

    /// HELPERS
    void copyStudents(const std::vector<Student*>& other);
    void deleteStudents();
};

#endif //RULE_OF_3_5_0_SCHOOL_H
