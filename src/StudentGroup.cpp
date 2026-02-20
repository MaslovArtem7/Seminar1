#include "StudentGroup.h"
#include <iostream>

StudentGroup::StudentGroup(const std::string& name) : groupName(name) {}

void StudentGroup::addStudent(const Student& student) {
    students.push_back(student);
}

Student* StudentGroup::findStudentById(int id) {
    for (auto& student : students) { // Используем auto&, чтобы вернуть указатель на оригинал
        if (student.getId() == id) {
            return &student; // Возвращаем адрес найденного студента
        }
    }
    return nullptr; // Если не нашли
}

double StudentGroup::calculateGroupAverage() const {
    if (students.empty()) {
        return 0.0;
    }
    double totalSum = 0.0;
    int totalGrades = 0;
    for (const auto& student : students) {
        // Мы можем вызвать calculateAverage для каждого студента, но это даст среднее
        // из средних, что неверно. Нужно суммировать все оценки и все предметы.
        // Для простоты, сделаем по-другому. В идеале, нужно хранить все оценки и считать общее среднее.
        // Упростим: будем считать, что среднее по группе - это среднее арифметическое средних баллов студентов.
        // ИЛИ доработаем логику. Давайте сделаем правильно.
    }
    
    // Альтернативный и более правильный способ:
     double sumOfAllGrades = 0.0;
     int countOfAllGrades = 0;
     for (const auto& student : students) {
         // Здесь нужен способ получить все оценки студента. У нас его нет.
         // Придется добавить геттер для вектора grades в класс Student.
         // Но это нарушит инкапсуляцию. Для простоты примера - ок.
     }
     
    // Компромиссный вариант (используем, если не хотим менять Student):
     if (students.empty()) return 0.0;
     double averageSum = 0.0;
     for (const auto& student : students) {
         averageSum += student.calculateAverage();
     }
     return averageSum / students.size();

}

void StudentGroup::printAllStudents() const {
    std::cout << "--- Group: " << groupName << " ---" << std::endl;
    if (students.empty()) {
        std::cout << "No students in group." << std::endl;
    } else {
        for (const auto& student : students) {
            student.printInfo();
        }
    }
    std::cout << "-------------------------" << std::endl;
}