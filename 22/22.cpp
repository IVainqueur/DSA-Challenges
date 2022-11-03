// Question 21 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    std::string word;
    int spaces = 0, words = 0, characters = 0, nonspaces = 0;
    std::cout << "Enter paragraph: \n>";
    std::getline(std::cin, word);

    for (int i = 0; i < word.length(); i++)
    {
        char cur = word[i];
        characters++;
        if (isspace(cur))
            spaces++;
        else
            nonspaces++;
        // add word
        if (isspace(cur) && nonspaces != 0)
        {
            words++;
        }
    }
    words++;

    // std::cout << "Characters(no spaces): " << nonspaces
    //           << "\nCharacters(with spaces): " << characters
    //           << "\nWords: " << words << std::endl;

    std::cout << "Space count: " << (characters - nonspaces) << std::endl;
    return 0;
}