#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int S[9] = {};
    for (int i = 1; i <= 8; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (S[i + 1] > S[i + 2])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (S[i + 1] < 100 || 675 < S[i + 1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    int Sum = 0;
    for (int i = 0; i < 8; i++)
    {
        Sum += S[i + 1];
        if (Sum % 25 != 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
