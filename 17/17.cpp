// Question 17 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <math.h>

int main()
{
    float radius, area, circ;

    std::cout << "radius = ";
    std::cin >> radius;

    area = M_PI * radius * radius;
    circ = 2.0f * M_PI * radius;

    std::cout << "Area = " << area << std::endl;
    std::cout << "Circ = " << circ << std::endl;

    return 0;
}