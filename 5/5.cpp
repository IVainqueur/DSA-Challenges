// Question 5 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <math.h>

int main()
{
    double r;
    std::cout << "r = ";
    std::cin >> r;

    double volume = (4.0 / 3.0) * M_PI * pow(r, 3.0);

    std::cout << "volume = " << volume << std::endl;
}