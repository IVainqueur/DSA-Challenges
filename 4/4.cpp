// Question 4 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    int n1, n2;
    std::cout << "Input 1st number: ";
    std::cin >> n1;

    std::cout << "Input 2nd number: ";
    std::cin >> n2;

    int swap = n2;
    n2 = n1;
    n1 = swap;

    std::cout << "The 1st number is: " << n1 << std::endl;
    std::cout << "The 2nd number is: " << n2 << std::endl;
}