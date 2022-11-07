// Question 33 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <vector>

typedef struct
{
    int size;
    std::vector<int> values;
} Arr;

Arr findDups(int *arr1, int *arr2, int size);

int main()
{
    int arr1[] = {3, 46, 7, 8, 83, 9};
    int arr2[] = {90, 76, 7, 2, 8, 1};

    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    Arr dups = findDups(arr1, arr2, (arr1Size < arr2Size) ? arr1Size : arr2Size);

    for (int i = 0; i < dups.size; i++)
    {
        std::cout << "i = " << i << "\tval = " << dups.values[i] << "\n";
    }

    std::cout << std::endl;
    return 0;
}

Arr findDups(int *arr1, int *arr2, int size)
{
    int dups[size];
    int dupSize = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (*(arr1 + i) == *(arr2 + j))
            {
                dups[dupSize] = *(arr1 + i);
                dupSize++;
            }
        }
    }

    for (int i = 0; i < dupSize; i++)
    {
        std::cout << "-----> " << i << "\t" << dups[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::vector<int> res(dupSize);
    int i = 0;
    for (int &x : res)
    {
        x = dups[i];
        i++;
    }

    return {
        dupSize,
        res};
}