// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH = 25;

    char array1[LENGTH] = "Hey, guys? ";
    char array2[] = "What's up?";

    std::string string1 = "Hey, everybody!";
    std::string string2 = "How's it going?";

    strncat(array1, array2, LENGTH);
    std::cout << array1 << std::endl;
    std::cout << string1 + " " + string2 << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
