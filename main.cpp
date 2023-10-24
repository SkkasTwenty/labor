/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <string>


void printStringLength(const std::string& str) {
    std::cout << "The length of the string is: " << str.length() << std::endl;
}

int main() {
    std::string userInput;
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    printStringLength(userInput);

    return 0;
}