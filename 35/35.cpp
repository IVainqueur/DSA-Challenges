// Question 34 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    int n, oddSum = 0, evenSum = 0, diff, i;

    std::cout << "arrSize = ";
    std::cin >> n;

    int arr[n];

    for(i = 0; i < n; i++) {
        std::cout << "[" << i + 1 << "] --> ";
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    diff = oddSum - evenSum;

    std::cout << "oddSum - evenSum = diff <=> " << oddSum << " - " << evenSum << " = " << diff << std::endl;

}