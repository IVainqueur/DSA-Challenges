// Question 9 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>
#include <cmath>
using namespace std;

#define MIN 1
#define MAX 100

int main()
{
    int count = 0;
    for (int a = MIN + 1; a < MAX; a++)
    {
        for (int b = a; b < MAX; b++)
        {
            double hypo = sqrt(pow(a, 2) + pow(b, 2));
            if (fmod(hypo, 1) == 0.0)
            {
                cout << "( " << a << ", " << b << " ) = " << hypo << "\n";
                count++;
            }
        }
    }
    cout << "The total number of pairs is " << count << endl;
    return 0;
}