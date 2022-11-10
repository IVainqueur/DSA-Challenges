// Answer to Question 40 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>

int Daphne(int *arr, int size);

int main()
{
    int arr1[] = {2, 4, 2};
    int arr2[] = {1, 3, 17, -5};
    int arr3[] = {3, 2, 5};

    std::cout << "Daphne(arr1) = " << Daphne(arr1, 3) << std::endl;
    std::cout << "Daphne(arr2) = " << Daphne(arr2, 4) << std::endl;
    std::cout << "Daphne(arr3) = " << Daphne(arr3, 3) << std::endl;

    return 0;
}

int Daphne(int *arr, int size)
{
    int oddCount = 0;
    int evenCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    if (oddCount != 0 && evenCount != 0)
        return 0;
    else
        return 1;
}