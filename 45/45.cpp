// Answer to Question 45 in exercises ---> https://shorturl.at/dqsz4

#include <iostream>
#include <vector>
#include <math.h>

std::vector<int> get_digits(int num)
{
    std::vector<int> digits;
    num = abs(num);
    if (num == 0)
    {
        digits.push_back(0);
        return digits;
    }

    int remainder = num;
    while (true)
    {
        int rem = remainder % 10;
        digits.push_back(rem);
        remainder /= 10;
        if (remainder == 0)
        {
            break;
        }
    }
}

int isDigitSum(int num1, int num2)
{
    std::vector<int> num1_digits = get_digits(num1);
    std::vector<int> num2_digits = get_digits(num2);

    int num1_sum = 0;
    int num2_sum = 0;
    for (auto x : num1_digits)
    {
        num1_sum += x;
    }
    for (auto x : num2_digits)
    {
        num2_sum += x;
    }

    return (int)(num1_sum < num2_sum);
}

int main()
{
    int n1 = 2043;
    std::cout << isDigitSum(4567, 1234) << std::endl;
    return 0;
}