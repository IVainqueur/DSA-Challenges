// Question 16 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    std::string firstname, lastname;

    std::cout << "Input first name: ";
    std::cin >> firstname;

    std::cout << "Input last name: ";
    std::cin >> lastname;

    std::cout << "Name is reverse is: " << lastname << " " << firstname << std::endl;
}