#include <iostream>
#include "declaration.h"
// void passVal(int val)
// {
//     val=20;
//     std::cout<<&val<<" "<<val<<"\n";
// }
// void passRef(int &ref){
//     ref=20;
//     std::cout<<&ref<<" "<<ref<<"\n";
// }
int main()
{
    using namespace leedayeon2566038;
    stduent lee{2566038, 100,'A'};
    printStudent(lee);
    stduent kim{ inputStudent()};
    printStudent(kim);
    // std::cout<<leedayeon2566038::inputStudent()<<std::endl;
    std::cout<<leedayeon2566038::addIntegers()<<std::endl;
    // int n{10};
    // std::cout<<&n<<" "<<n<<std::endl;
    // passVal(n);
    // std::cout<<&n<<" "<<n<<std::endl;
    // passRef(n);
    // std::cout<<&n<<" "<<n<<std::endl;
    // using namespace leedayeon2566038;
    // int n{inputInteger()};
    // int m{inputInteger()};
    // std::cout<<n<<"+"<<m<<"="<<addIntegers(n,m)<<std::endl;
    return 0;
}
// namespace leedayeon2566038
// {
    
// }