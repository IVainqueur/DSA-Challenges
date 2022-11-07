// Question 33 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

// the difference between the square of the sum and the sum of the squares of the first N natural numbers

int main()
{
    int N = 10;
    int squareOfSum, sum = 0, sumOfSquares = 0, diff;

    for (int i = 1; i <= N; i++)
    {
        sum += i;
        sumOfSquares += i * i;
    }

    squareOfSum = sum * sum;
    diff = squareOfSum - sumOfSquares;

    std::cout << "The difference is " << diff << std::endl;
}
