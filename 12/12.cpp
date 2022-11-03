// Question 12 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    float c;
    std::cout << "Enter the temperature in Celcius: ";
    std::cin >> c;

    float f = ((9.0 / 5.0) * c) + 32;

    std::cout << c << "*C == " << f << "*F\n";

    return 0;
}