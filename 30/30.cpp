// Question 30 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <vector>

bool isPrimeNumber(int num);

int main()
{
    int n;
    std::cout << "n = ";
    std::cin >> n;

    if (n == 0)
    {
        std::cout << "0";
        exit(0);
    }
    else if (n == 1)
    {
        std::cout << "0";
        exit(0);
    }

    std::vector<int> primesBefore;
    std::cout << primesBefore.size() << std::endl;
    int i = 1;
    while (true)
    {
        i++;
        if (isPrimeNumber(i) && primesBefore.size() < n)
            primesBefore.push_back(i);
        else
            break;
    }

    for (int x : primesBefore)
    {
        std::cout << x << "\t";
    }
    std::cout << std::endl;
}

bool isPrimeNumber(int num)
{
    int factorCount = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            factorCount++;
        if (factorCount >= 2)
            return false;
    }
    return true;
}