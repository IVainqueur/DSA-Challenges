// Question 25 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

std::string reversestring(std::string str)
{
    char reversed[str.size()];
    reversed[str.size()] = '\0';
    for (int i = 0; i < str.size(); i++)
        reversed[str.size() - 1 - i] = str[i];

    return reversed;
}

int main()
{
    std::string name = "Vainqueur";

    std::cout << "The reverse of " << name << " is " << reversestring(name) << std::endl;

    return 0;
}