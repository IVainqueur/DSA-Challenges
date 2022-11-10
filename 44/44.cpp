// Answer to Question 44 in exercises ---> https://shorturl.at/dqsz4
/*
    A Filter Array is an array that:
    1. must contain 11 if it contains 9
    2. must not contain 13 if it contains 7
 */
#include <iostream>

bool hasElement(int *arr, int len, int find);
int isFilterArray(int *a, int len);

int main()
{
    int arr1[] = {1, 2, 3, 9, 6, 11};
    int arr2[] = {3, 4, 6, 7, 14, 16};
    int arr3[] = {3, 6, 5, 5, 13, 6, 13};
    int arr4[] = {9, 6, 18};
    int arr5[] = {4, 7, 13};

    std::cout << "isFilterArray(arr1) = " << isFilterArray(arr1, sizeof(arr1)/sizeof(arr1[0])) << std::endl;
    std::cout << "isFilterArray(arr2) = " << isFilterArray(arr2, sizeof(arr2)/sizeof(arr2[0])) << std::endl;
    std::cout << "isFilterArray(arr3) = " << isFilterArray(arr3, sizeof(arr3)/sizeof(arr3[0])) << std::endl;
    std::cout << "isFilterArray(arr4) = " << isFilterArray(arr4, sizeof(arr4)/sizeof(arr4[0])) << std::endl;
    std::cout << "isFilterArray(arr5) = " << isFilterArray(arr5, sizeof(arr5)/sizeof(arr5[0])) << std::endl;

    return 0;
}

int isFilterArray(int *a, int len)
{
    // Check if it fullfils the first rule
    if (hasElement(a, len, 9) && !hasElement(a, len, 11))
        return 0;

    // Check if it fullfils the second rule
    if (hasElement(a, len, 7) && hasElement(a, len, 13))
        return 0;

    // Otherwise return 1
    return 1;
}

bool hasElement(int *arr, int len, int find)
{
    for (int i = 0; i < len; i++)
    {
        if (*(arr + i) == find)
            return true;
    }
    return false;
}