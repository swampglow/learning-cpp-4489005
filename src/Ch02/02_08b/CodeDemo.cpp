// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_COUNT 4

int main(){
    const size_t AGE_COUNT = 4;

    int age[AGE_COUNT];
    age [0] = 25;
    age [1] = 20;
    age [2] = 19;
    age [3] = 19;
    float temp [] = {31.5, 32.7, 38.9};

    std::cout << "The number of elements in Age arrage is " << AGE_COUNT << std::endl;
    std::cout << "Age[0] is " << age[0] << std::endl;
    std::cout << "Age[1] is " << age[1] << std::endl;
    std::cout << "Age[2] is " << age[2] << std::endl;
    std::cout << "Age[3] is " << age[3] << std::endl;

    std::cout << "Temp[0] is " << age[0] << std::endl;
    std::cout << "Temp[1] is " << age[1] << std::endl;
    std::cout << "Temp[2] is " << age[2] << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
