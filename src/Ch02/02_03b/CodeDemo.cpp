// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; //single line comment

/* multi-line comment
   to declare variables */

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "Flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "Flag = " << my_flag << std::endl;
    std::cout << "Sum of a + b = " << a + b << std::endl;
    std::cout << "b-a = " << b - a << std::endl;
    unsigned int positive; 
    positive = b-a;
    std::cout << "unsigned b-a = " << positive << std::endl;
    std::cout << "a*b = " << a * b << std::endl;
    std::cout << "b/a = " << b / a << std::endl;
    std::cout << "Hello\nWorld\n";
    std::cout << std::endl << std::endl;
    return (0);
}
