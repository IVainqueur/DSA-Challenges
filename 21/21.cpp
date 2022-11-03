// Question 21 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main()
{
    long int SECONDS_IN_YEAR = 60 * 60 * 24 * 365;
    long int seconds = 1000000000, years;

    years = seconds / SECONDS_IN_YEAR;

    std::cout << "John has " << years << " years of age!\n";
}