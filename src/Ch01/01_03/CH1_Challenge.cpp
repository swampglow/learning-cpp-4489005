//my challenge
#include <iostream>
#include <ostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your Name:" << std::flush;
    std::cin >> str;
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}