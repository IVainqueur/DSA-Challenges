// Question 28 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    std::string str = "vainqueur";
    int i = -1;

    while (true)
    {
        i++;
        if (str[i] == '\0')
            break;
        if (isalpha(str[i]) && (int)str[i] >= 97 && (int)str[i] <= 122)
            str[i] = (char)((int)str[i] - 32);
    }

    std::cout << "In uppercase:" << str << std::endl;
}