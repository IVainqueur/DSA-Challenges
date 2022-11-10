// Answer to Question 41 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>
#include <vector>

int isOddValent(int* a, int len);

int main()
{
    int arr1[] = {9, 3, 4, 9, 1};
    int arr2[] = {3, 3, 3, 3};
    int arr3[] = {8, 8, 8, 4, 4, 7, 2};

    int arr4[] = {1, 2, 3, 4, 5};
    int arr5[] = {2, 2, 2, 4, 4};

    std::cout << "isOddValent(arr1) = " << isOddValent(arr1, 5)<< std::endl;
    std::cout << "isOddValent(arr2) = " << isOddValent(arr2, 4)<< std::endl;
    std::cout << "isOddValent(arr3) = " << isOddValent(arr3, 7)<< std::endl;
    std::cout << "isOddValent(arr4) = " << isOddValent(arr4, 5)<< std::endl;
    std::cout << "isOddValent(arr5) = " << isOddValent(arr5, 5)<< std::endl;

    
    return 0;
}

int isOddValent(int *a, int len)
{
    bool hasOdd = false;
    bool hasDup = false;

    // Finding the odd number;
    for (int i = 0; i < len; i++)
    {
        if (*(a + i) % 2 != 0)
        {
            hasOdd = true;
            break;
        }
    }

    // Finding the first duplicate;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (*(a + i) == *(a + j))
            {
                hasDup = true;
                break;
            }
        }
    }

    return (int)(hasDup && hasOdd);
}