// Question 7 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <math.h>

#define MIN 1
#define MAX 20

int main()
{
    int prod = 1;
    int min = MIN % 2 == 0 ? MIN + 1 : MIN;
    for (int i = min; i < MAX; i += 2)
    {
        prod *= i;
    }

    std::cout << "the product is: " << prod << std::endl;
}