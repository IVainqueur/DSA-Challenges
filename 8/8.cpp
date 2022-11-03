// Question 8 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <math.h>

#define MIN 1
#define MAX 100

bool isPrime(int num);

int main()
{
    int prod = 1;
    for (int i = 2; i <= MAX; i++)
    {
        if (isPrime(i))
        {
            prod *= i;
        }
    }

    std::cout << "The product is " << prod << std::endl;
}

bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}