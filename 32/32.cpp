// Question 32 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <vector>

std::vector<int> getDigits(int num);
int countOccurences(int n, int find);

int main()
{
    int n = 33331;

    std::cout << "countOccurences(n, 1) = " << countOccurences(n, 6) << std::endl;
}

std::vector<int> getDigits(int num)
{
    std::vector<int> digits;
    int remainder = num;

    while (remainder > 0)
    {
        digits.push_back(remainder % 10);
        remainder /= 10;
    }

    return digits;
}

int countOccurences(int n, int find)
{
    std::vector<int> nDigits = getDigits(n);
    int count = 0;
    for (int el : nDigits)
    {
        if (el == find)
            count++;
    }

    return count;
}