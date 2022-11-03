// Question 13 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    int n1, n2;
    std::cout << "Enter number 1: ";
    std::cin >> n1;

    std::cout << "Enter number 2: ";
    std::cin >> n2;

    if (n2 == 0)
    {
        std::cout << "[error] impossible in the set of real numbers" << std::endl;
        exit(0);
    }

    std::cout << "quotient: " << ((float)n1/(float)n2) << "\nremainder: " << (n1%n2) << std::endl;
}