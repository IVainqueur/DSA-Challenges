// Question 33 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <vector>
#include <math.h>

std::vector<int> getDigits(int num);

int main()
{
    int n, nReverse = 0;
    bool isNegative = false;

    std::cout << "Enter the integer: ";
    std::cin >> n;

    isNegative = n < 0;

    if(isNegative)
        n = abs(n);

    std::vector<int> nDigits = getDigits(n);
    for (int i = 0; i < nDigits.size(); i++)
    {
        nReverse += nDigits[i] * pow(10, nDigits.size() - i - 1);
    }

    if(isNegative)
        nReverse *= -1;

    std::cout << n << " ===> " << nReverse << std::endl;
    return 0;
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
