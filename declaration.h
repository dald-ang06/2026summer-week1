#pragma once
namespace leedayeon2566038
{
    struct student{
        int id{};
        int score{};
        char grade{};

    }; 
    //구조체는 선언할 때 무조건 세미콜론 넣어줘야 함
    student inputStudent();
    void setGrade(student &s);
    void printStudent(const student& s);
    
   
}