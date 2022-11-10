// Answer to Question 46 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>

bool isPrimeNumber(int num);
int isFineArray(int *a, int len);
void sortArr(int *arr, int len);
void transferArr(int *from, int *to, int len);

int main()
{
    int arr1[] = {4, 7, 9, 6, 5};
    int arr2[] = {4, 9, 6, 33};
    int arr3[] = {3, 8, 15};
    int arr4[] = {4, 7, 9, 6, 5, 13, 2, 17};

    // std::cout << "isFineArray(arr1) = " << isFineArray(arr1, sizeof(arr1) / sizeof(arr1[0])) << std::endl;
    // std::cout << "isFineArray(arr2) = " << isFineArray(arr2, sizeof(arr2) / sizeof(arr2[0])) << std::endl;
    std::cout << "isFineArray(arr3) = " << isFineArray(arr3, sizeof(arr3) / sizeof(arr3[0])) << std::endl;
    // std::cout << "isFineArray(arr4) = " << isFineArray(arr4, sizeof(arr4) / sizeof(arr4[0])) << std::endl;
    return 0;
}

void sortArr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int swap = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = swap;
            }
        }
    }
}

void transferArr(int *from, int *to, int len)
{
    for (int i = 0; i < len; i++)
    {
        *(to + i) = *(from + i);
    }
}

bool isPrimeNumber(int num)
{
    int factorCount = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            factorCount++;
        if (factorCount >= 2)
            return false;
    }
    return true;
}

int isFineArray(int *a, int len)
{
    int _primeNums[len];
    int primeNumCount = 0;
    for (int i = 0; i < len; i++)
    {
        if (isPrimeNumber(*(a + i)))
        {
            _primeNums[primeNumCount] = *(a + i);
            primeNumCount++;
        }
    }

    if (primeNumCount == 0)
        return 1;

    int primeNums[primeNumCount];
    transferArr(_primeNums, primeNums, primeNumCount);
    sortArr(primeNums, primeNumCount);

    int expectedTwins = primeNumCount - 1;
    int twinCount = 0;

    for (int i = 0; i < primeNumCount; i++)
    {
        if (i == primeNumCount - 1)
            break;
        if (abs(primeNums[i] - primeNums[i + 1]) == 2)
            twinCount++;
    }
    // std::cout << "expectedTwinCount = " << expectedTwins << "; twinCount = " << twinCount << std::endl;
    return expectedTwins == twinCount;
}