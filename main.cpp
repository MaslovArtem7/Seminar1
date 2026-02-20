#include <iostream>
#include "Student.h"
#include "StudentGroup.h"

int main() {
    std::cout << "=== Система учета студентов и учебных групп ===\n" << std::endl;

    // 1. Создаем группу
    StudentGroup group("ИТ-11");

    // 2. Создаем студентов
    Student student1(101, "Иван Петров");
    Student student2(102, "Мария Иванова");
    Student student3(103, "Петр Сидоров");

    // 3. Добавляем им оценки
    student1.addGrade(5);
    student1.addGrade(4);
    student1.addGrade(5);

    student2.addGrade(4);
    student2.addGrade(4);
    student2.addGrade(3);

    student3.addGrade(3);
    student3.addGrade(5);
    student3.addGrade(4);

    // 4. Добавляем студентов в группу
    group.addStudent(student1);
    group.addStudent(student2);
    group.addStudent(student3);

    // 5. Выводим информацию о всех студентах в группе
    group.printAllStudents();

    // 6. Тестируем поиск студента по ID
    std::cout << "\nПоиск студента с ID 102:" << std::endl;
    Student* foundStudent = group.findStudentById(102);
    if (foundStudent) {
        std::cout << "Найден: ";
        foundStudent->printInfo();
    } else {
        std::cout << "Студент не найден." << std::endl;
    }

    std::cout << "\nПоиск студента с ID 999:" << std::endl;
    foundStudent = group.findStudentById(999);
    if (foundStudent) {
        std::cout << "Найден: ";
        foundStudent->printInfo();
    } else {
        std::cout << "Студент не найден (ожидаемый результат)." << std::endl;
    }

    // 7. Вычисляем средний балл по группе
    std::cout << "\nСредний балл по группе: " << group.calculateGroupAverage() << std::endl;

    std::cout << "\n=== Тестирование завершено ===" << std::endl;
    return 0;
}