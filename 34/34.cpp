// Question 34 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    int n, result = 1;
    std::cout << "arrSize = ";
    std::cin >> n;

    if (n % 2 == 0)
        exit(0);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "[" << i + 1 << "] --> ";
        std::cin >> arr[i];
    }

    int middleEl = arr[(n - 1) / 2];
    for (int i = 0; i < (n / 2); i++)
    {
        if (arr[i] <= middleEl || arr[n - 1 - i] <= middleEl)
        {
            result = 0;
            break;
        }
    }

    std::cout << "isCentered = " << result << std::endl;
    return 0;
}
