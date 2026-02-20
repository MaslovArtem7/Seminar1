#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H

#include "Student.h"
#include <string>
#include <vector>

class StudentGroup {
private:
    std::string groupName;
    std::vector<Student> students; // Храним студентов ПО ЗНАЧЕНИЮ (для простоты)

public:
    StudentGroup(const std::string& name);

    void addStudent(const Student& student);
    // Возвращаем указатель на студента, если найден, иначе nullptr
    Student* findStudentById(int id);
    double calculateGroupAverage() const;
    void printAllStudents() const; // Добавим для тестирования
};

#endif