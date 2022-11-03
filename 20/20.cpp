// Question 20 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    std::string phrase;

    std::cout << "Enter phrase: ";
    std::getline(std::cin, phrase);

    int phraseSize = phrase.size();
    bool isPalindrome = true;
    for (int i = 0; i < (phraseSize/2); i++)
    {
        if (phrase[i] != phrase[phraseSize - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    std::string interjection = isPalindrome ? "" : "not";

    std::cout << "The phrase given is " << interjection << " a palindrome!\n";
}
