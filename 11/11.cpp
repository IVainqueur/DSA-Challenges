// Question 11 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    float l, w;
    std::cout << "Length = ";
    std::cin >> l;

    std::cout << "Width = ";
    std::cin >> w;

    float perimeter = (l + w) * 2.0;
    float area = l * w;

    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << area << std::endl;
    return 0;
}