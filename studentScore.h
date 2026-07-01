#pragma once
#include <iostream>
namespace leedayeon2566038
{
    class student{
        private:
        int id{};
        int score{};
        char grade{};
        void testid();
        void testscore();
        void calgrade();

        public:
        void print();
        void input();
        int getid();
        void setid(int newid);
        int getscore();
        void setscore(int newscore);
        char getgrade();

        

    };
    
   
}