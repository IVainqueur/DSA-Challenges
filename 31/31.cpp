// Question 31 in the exercises --> https://shorturl.at/dqsz4 
#include <iostream>
#include <vector>
#include <math.h>

std::vector<int> findFactors(int num)
{
    std::vector<int> factors;
    for (int i = 1; i < num / 2; i++)
    {

        if (num % i == 0)
        {
            factors.push_back(i);
        }
    }
    factors.push_back(num);

    return factors;
}

int minDistance(std::vector<int> arr)
{
    int min = abs(arr[0] - arr[1]);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int diff = abs(arr[i] - arr[j]);
            if (diff < min)
            {
                min = diff;
            }
        }
    }

    return min;
}

int main()
{
    int num = 13013;
    std::vector<int> factors = findFactors(num);
    for (int x : factors)
    {
        std::cout << x << "\t";
    }

    std::cout << std::endl;

    int min = minDistance(factors);

    std::cout << "The minimum distance is " << min << std::endl;

    return 0;
}

/*
NB:  This program is highly inefficient
 */