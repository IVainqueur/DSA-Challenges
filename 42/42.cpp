// Answer to Question 42 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>
#include <vector>

std::vector<int> findFactors(int num);
int isNormal(int n);

int main()
{

    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    int n4 = 4;
    int n5 = 5;
    int n7 = 7;
    int n8 = 8;
    int n6 = 6;
    int n9 = 9;

    std::cout << "isNormal(" << n1 << ") = " << isNormal(n1) << std::endl;
    std::cout << "isNormal(" << n2 << ") = " << isNormal(n2) << std::endl;
    std::cout << "isNormal(" << n3 << ") = " << isNormal(n3) << std::endl;
    std::cout << "isNormal(" << n4 << ") = " << isNormal(n4) << std::endl;
    std::cout << "isNormal(" << n5 << ") = " << isNormal(n5) << std::endl;
    std::cout << "isNormal(" << n7 << ") = " << isNormal(n7) << std::endl;
    std::cout << "isNormal(" << n8 << ") = " << isNormal(n8) << std::endl;
    std::cout << std::endl;

    std::cout << "isNormal(" << n6 << ") = " << isNormal(n6) << std::endl;
    std::cout << "isNormal(" << n9 << ") = " << isNormal(n9) << std::endl;

    return 0;
}

std::vector<int> findFactors(int num)
{
    std::vector<int> factors;
    if (num == 1)
        return std::vector<int>{1};

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
        {
            factors.push_back(i);
        }
    }
    factors.push_back(num);

    return factors;
}

int isNormal(int n)
{
    std::vector<int> nFactors = findFactors(n);
    bool hasOddFactor = false;
    for (int factor : nFactors)
    {
        // std::cout << "\n--> [" << n << "] factor: " << factor << std::endl;
        if (factor == 1)
            continue;
        if (factor == n)
            continue;
        if (hasOddFactor)
            break;
        if (factor % 2 != 0)
            hasOddFactor = true;
    }

    return (int)!hasOddFactor;
}