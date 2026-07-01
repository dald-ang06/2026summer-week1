// #include <iostream>
// #include "declaration.h"
// namespace leedayeon2566038
// {
//     // int inputInteger(){
//     //     std::cout<<"Enter an integer: ";
//     //     int a{};
//     //     std::cin>>a;
//     //     return a;
//     // }
//     // int addIntegers(int a, int b){
//     //     //매개변수 선언을 할 때는 매개변수 이름을 안써도 됨!
//     //     return a+b;
//     // }


//     student inputStudent(){
//         student s;
//         std::cout<<"Enter student ID: ";
//         std::cin>>s.id;
//         std::cout<<"Enter student score(0~100) ";
//         std::cin>>s.score;
//         setGrade(s);
    
//         return s;
//     }
//     void setGrade(student &s){
//         switch(s.score/10){
//             case 10:
//             case 9:
//             s.grade='A'; break;
//             case 8: s.grade='B';break;
//             case 7:s.grade='C';break;
//             case 6:s.grade='D';break;
//             default: s.grade='F';

//         }
        

//     }
//     void printStudent(const student& s){
//         std::cout<<"ID: "<<s.id<<"\n";
//         std::cout<<"Score: "<<s.score<<"\n";
//         std::cout<<"Grade: "<<s.grade<<"\n";
//     }
// }



