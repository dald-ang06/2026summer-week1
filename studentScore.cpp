#include "studentScore.h"

namespace leedayeon2566038{
        void student:: testid(){
            if(id<1000000||id>9999999){
                std::cout<<"Invalid id!\n";
                std::exit(1);
            }
        }
        void student::testscore(){
            if(score<0||score>100){
                std::cout<<"Invalid score!\n";
                std::exit(1);
            }
        }
        void student::calgrade(){
            switch(score/10){
            case 10:
            case 9:
            grade='A'; break;
            case 8: grade='B';break;
            case 7:grade='C';break;
            case 6:grade='D';break;
            default: grade='F';

        }
    }

        void student::print(){
            std::cout<<"ID: "<<id<<"\n";
            std::cout<<"score: "<<score<<"\n";
            std::cout<<"grade: "<<grade<<"\n";
        }
        void student::input(){
            std::cout<<"Enter Id: ";
            std::cin>>id;
            testid();
            std::cout<<"Enter score: ";
            std::cin>>score;
            testscore();
            calgrade();
        }
        int student::getid(){
            return id;
        }
        void student::setid(int newid){
            id=newid;
            testid();
        }
        int student::getscore(){
            return score;
        }
        void student::setscore(int newscore){
            score=newscore;
            testscore();
            calgrade();
        }
        char student::getgrade(){
            return grade;
        }
};
