// Answer to Question 39 in exercises ---> https://shorturl.at/dqsz4
#include <iostream>
#include <bitset>

int main()
{
    std::string binary = std::bitset<8>(128).to_string(); //to binary
    std::cout<<sizeof(binary)<<"\n";

    unsigned long decimal = std::bitset<8>(binary).to_ulong();
    std::cout<<decimal<<"\n";
    return 0;
}