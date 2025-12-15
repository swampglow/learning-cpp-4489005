// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt = -7.66;
    int32_t sgn = flt;
    uint32_t usgn = sgn;

    std::cout << "Float is: " << flt << std::endl;
    std::cout << "Sign is: " << sgn << std::endl;
    std::cout << "Unsigned is: " << (int32_t) usgn<< std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
