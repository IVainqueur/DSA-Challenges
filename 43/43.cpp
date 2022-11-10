// Answer to Question 43 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>

int isAllPossibilities(int *a, int len);
bool hasElement(int *arr, int len, int find);

int main()
{
    int arr1[] = {1, 2, 0, 3, 5};
    std::cout << "isAllPosibilities(arr1) = " << isAllPossibilities(arr1, 5) << std::endl;
    return 0;
}

bool hasElement(int *arr, int len, int find)
{
    for (int i = 0; i < len; i++)
    {
        if (*(arr + i) == find)
            return true;
    }
    // std::cout << "... has not\n";
    return false;
}

int isAllPossibilities(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        // std::cout << "\nChecking " << i;
        if (!hasElement(a, len, i))
            return (int)false;
        // std::cout << "... Found it\n";
    }
    return (int)true;
}
