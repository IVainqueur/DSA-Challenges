// Question 14 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    std::string numtype = "unknown";

    if (n == 0)
        numtype = "zero";
    else if (n < 0)
        numtype = "negative";
    else if (n > 0)
        numtype = "positive";

    std::cout << "The number entered is " << numtype << std::endl;
}