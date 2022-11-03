// Question 1 in the exercises --> https://shorturl.at/dqsz4 
#include <iostream>
#include <stdlib.h>
#include "1.h"
using namespace arithmetic;

float *getNums(std::string nums);

int main()
{
    Operations choices[] = {ADD, SUBTRACT, MULTIPLY, DIVIDE, MODULUS};
    std::string choicesStr[] = {"ADD", "SUBTRACT", "MULTIPLY", "DIVIDE", "MODULUS"};
    int choice;
    float a, b;
    std::string nums;
begin:
    std::cout << "MENU: 1. Add \n2. Subtract \n3. Multiply \n4. Divide \n5. Modulus\n> ";
    std::cin >> choice;
    if (choice <= 0 || choice > 5)
    {
        std::cout << "Wrong Choice. Try again. \n";
        goto begin;
    }

    std::cout << "Enter your 2 numbers [ "<< choicesStr[choice -1] << " ]: ";
    std::cin.ignore();
    std::getline(std::cin, nums);

    float *numsArr = getNums(nums);

    std::cout << "Result: " << calculate(numsArr[0], numsArr[1], choices[choice - 1]) << std::endl;

    std::cout << "Continue ? ";
    std::string goon;
    std::cin >> goon;

    if (!goon.compare("y")){
        system("clear");
        goto begin;
    }

    return 0;
}

using namespace std;
float *getNums(string nums)
{
    float *numsArr = new float(2);
    numsArr[0] = stof(nums.substr(0, nums.find(' ')));
    numsArr[1] = stof(nums.substr(nums.find(' ') + 1));
    return numsArr;
}