// Question 29 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    std::string word;
    int spaces = 0, words = 0, characters = 0, nonspaces = 0;
    std::cout << "Enter paragraph: ";
    std::getline(std::cin, word);


    for (int i = 0; i < word.length(); i++)
    {
        char cur = word[i];
        characters++;
        if (!isspace(cur))
            std::cout << cur;
    }

    std::cout << std::endl;

    return 0;
}