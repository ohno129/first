#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    long long A = 1;
    for (int x = 0; x <= 70; x++)
    {
        A = pow(2, x);

        for (int y = 0; y <= 40; y++)
        {
            A *= pow(3, y);
            if (A == N)
            {
                cout << "Yes" << endl;
                return 0;
            }
            A = pow(2, x);
        }
    }

    cout << "No" << endl;

    return 0;
}
