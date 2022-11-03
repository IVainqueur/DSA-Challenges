// Question 6 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <math.h>

#define MIN 0
#define MAX 100

int main()
{
    int sum = 0;
    for (int i = MIN; i < MAX; i += 2)
    {
        sum += i;
    }

    std::cout << "the SUM is: " << sum << std::endl;
}