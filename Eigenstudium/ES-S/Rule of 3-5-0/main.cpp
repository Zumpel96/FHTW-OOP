#include <iostream>

#include "School.h"
#include "Student.h"

int main() {
    std::cout << "===== INITIALIZE =====" << std::endl;
    School schoolA("School A");
    schoolA.addStudent("John Doe");
    schoolA.addStudent("Jane Doe");
    schoolA.printSchool();

    School schoolB("School B");
    schoolB.addStudent("Toni Huber");
    schoolB.addStudent("Alex Alexanderson");
    schoolB.printSchool();

    // Move Assignment
    std::cout << "===== MOVE ASSIGNMENT =====" << std::endl;
    schoolB = std::move(schoolA);
    schoolB.setName("School C");
    schoolB.addStudent("Jim Doe");
    schoolB.printSchool();
    schoolA.printSchool(); // Printed eine "leere" Schule, da alle Felder von A auf B verschoben wurde

    // Copy Assignment
    std::cout << "===== COPY ASSIGNMENT =====" << std::endl;
    schoolA = schoolB;
    schoolA.setName("School A");
    schoolA.printSchool();
    schoolB.printSchool();

    // Move Constructor
    std::cout << "===== MOVE CONSTRUCTOR =====" << std::endl;
    School schoolC(std::move(schoolA));
    schoolC.setName("School C");
    schoolC.addStudent("Jessie Doe");
    schoolC.printSchool();
    schoolA.printSchool(); // Printed eine "leere" Schule, da alle Felder von A auf B verschoben wurde

    // Copy Constructor
    std::cout << "===== COPY CONSTRUCTOR =====" << std::endl;
    School schoolD(schoolC);
    schoolD.setName("School D");
    schoolD.addStudent("Jerry Doe");
    schoolD.printSchool();
    schoolC.printSchool();

    return 0;
}
