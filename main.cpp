#include "studentScore.h"
int main(){
    using namespace leedayeon2566038;
    using namespace std;
    student s1;
    s1.input();
    s1.print();

    student s2;
    s2.setid(5656565);
    s2.setscore(85);
    s2.print();

    if(s1.getid()==s2.getid()&&
s1.getgrade()==s2.getgrade()&&
s1.getscore()==s2.getscore()){
    cout<<"s1 and s2 are equal.\n";

    }
    else
    cout<<"s1 and s2 are not equal.\n";

    return 0;
}