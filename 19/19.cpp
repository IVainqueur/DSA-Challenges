// Question 19 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

#define ARR_SIZE 3

int main()
{
    int arr[ARR_SIZE];
    for (short int i = 0; i < ARR_SIZE; i++)
    {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Let's just use swapping
    for (short int i = 0; i < ARR_SIZE; i++)
    {
        for (short int j = i; j < ARR_SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    for (short int i = 0; i < ARR_SIZE; i++)
    {
        std::cout << arr[i] << "\t";
    }

    std::cout << std::endl;
    return 0;
}
