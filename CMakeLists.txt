cmake_minimum_required(VERSION 3.10)
# Название проекта (можно изменить)
project(StudentAccounting)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Говорим компилятору, где искать заголовочные файлы (.h)
include_directories(include)

# Указываем, какие файлы собирать в исполняемый файл
add_executable(${PROJECT_NAME}
    main.cpp
    src/Student.cpp
    src/StudentGroup.cpp
    # Заголовочные файлы тоже можно указать для удобства в IDE
    include/Student.h
    include/StudentGroup.h
)