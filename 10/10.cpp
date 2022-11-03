// Question 10 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <math.h>

#define VARNUM 3

int main()
{
    double x1, x2, a, b, c, delta;
    char variables[] = {'a', 'b', 'c'};
    double *varaddresses[] = {&a, &b, &c};

    for (int i = 0; i < VARNUM; i++)
    {
        std::cout << "Enter " << variables[i] << ": ";
        std::cin >> *(varaddresses[i]);
    }

    if (a == 0)
    {
        std::cout << "[Error] Impossible in the set of real numbers\n";
        exit(0);
    }

    delta = pow(b, 2) - (4 * a * c);
    x1 = ((b * -1.0) + sqrt(delta)) / (2 * a);
    x2 = ((b * -1.0) - sqrt(delta)) / (2 * a);


    std::cout << "[Results]\n";
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    return 0;
}