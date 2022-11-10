// Answer to Question 41 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>
#include <vector>

int isOddValent(std::vector<int> arr);

int main()
{
    std::vector<int> arr1{9, 3, 4, 9, 1};
    std::vector<int> arr2{3, 3, 3, 3};
    std::vector<int> arr3{8, 8, 8, 4, 4, 7, 2};

    std::vector<int> arr4{1, 2, 3, 4, 5};
    std::vector<int> arr5{2, 2, 2, 4, 4};

    std::cout << "isOddValent(arr1) = " << isOddValent(arr1)<< std::endl;
    std::cout << "isOddValent(arr2) = " << isOddValent(arr2)<< std::endl;
    std::cout << "isOddValent(arr3) = " << isOddValent(arr3)<< std::endl;
    std::cout << "isOddValent(arr4) = " << isOddValent(arr4)<< std::endl;
    std::cout << "isOddValent(arr5) = " << isOddValent(arr5)<< std::endl;

    
    return 0;
}

int isOddValent(std::vector<int> arr)
{
    bool hasOdd = false;
    bool hasDup = false;

    // Finding the odd number;
    for (int x : arr)
    {
        if (x % 2 != 0)
        {
            hasOdd = true;
            break;
        }
    }

    // Finding the first duplicate;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                hasDup = true;
                break;
            }
        }
    }

    return (int)(hasDup && hasOdd);
}