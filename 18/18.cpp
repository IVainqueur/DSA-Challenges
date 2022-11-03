// Question 18 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <math.h>

int main()
{
    float side, volume;

    std::cout << "side = ";
    std::cin >> side;

    volume = pow(side, 3);

    std::cout << "Volume = " << volume << std::endl;
}