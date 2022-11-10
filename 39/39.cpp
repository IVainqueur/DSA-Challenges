// Answer to Question 39 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>
#include <bitset>

int countOnes(std::string num);

int main()
{
    int n = 19;
    std::string binary = std::bitset<8>(n).to_string(); // to binary
    std::cout << binary << " has " << countOnes(binary) << " ones in it!\n";

    // unsigned long decimal = std::bitset<8>(binary).to_ulong();
    // std::cout << decimal << "\n";
    return 0;
}

int countOnes(std::string num)
{
    int count = 0;
    int i = 0;
    while (true)
    {
        if (num[i] == '\0')
            break;
        if (num[i] == '1')
            count++;
        i++;
    }

    return count;
}