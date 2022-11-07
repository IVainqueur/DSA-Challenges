#include <iostream>
#include <vector>

std::vector<int> findFactors(int num);

int main()
{
    int n;
    std::cout << "n = ";
    std::cin >> n;

    std::vector<int> nFactors = findFactors(n);

    std::string response = "";

    for (int x : nFactors)
    {
        switch (x)
        {
        case 3:
            response += "Pling";
            break;
        case 5:
            response += "Plang";
            break;
        case 7:
            response += "Plong";
            break;
        default:
            break;
        }
    }

    if (!response.compare(""))
        response = std::to_string(n);

    std::cout << response << std::endl;

    return 0;
}

std::vector<int> findFactors(int num)
{
    std::vector<int> factors;
    for (int i = 1; i < num / 2; i++)
    {

        if (num % i == 0)
        {
            factors.push_back(i);
        }
    }
    factors.push_back(num);

    return factors;
}