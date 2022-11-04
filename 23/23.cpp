// Question 23 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main() {
    char character;
    std::cout << "Enter the character: ";
    std::cin >> character;

    std::string thetype = isdigit(character) ? "digit" : "alpha";

    std::cout << "The entered character is a " << thetype << std::endl;
    return 0;
}