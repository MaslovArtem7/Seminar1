#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
private:
    int studentId;
    std::string name;
    std::vector<int> grades;

public:
    // Конструкторы
    Student(); // По умолчанию
    Student(int id, const std::string& name); // С параметрами

    // Методы
    void addGrade(int grade);
    double calculateAverage() const;
    void printInfo() const;

    // Геттер (понадобится для поиска студента по ID)
    int getId() const;
};

#endif