#include "Student.h"
#include <iostream>
#include <numeric> // для std::accumulate

Student::Student() : studentId(0), name("Unknown") {}

Student::Student(int id, const std::string& name) : studentId(id), name(name) {}

void Student::addGrade(int grade) {
    // Можно добавить проверку, что оценка валидна (например, от 1 до 5)
    grades.push_back(grade);
}

double Student::calculateAverage() const {
    if (grades.empty()) {
        return 0.0;
    }
    double sum = std::accumulate(grades.begin(), grades.end(), 0.0);
    return sum / grades.size();
}

void Student::printInfo() const {
    std::cout << "ID: " << studentId << ", Name: " << name << ", Grades: ";
    if (grades.empty()) {
        std::cout << "No grades";
    } else {
        for (int grade : grades) {
            std::cout << grade << " ";
        }
        std::cout << "(Avg: " << calculateAverage() << ")";
    }
    std::cout << std::endl;
}

int Student::getId() const {
    return studentId;
}