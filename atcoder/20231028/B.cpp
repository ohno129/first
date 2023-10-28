#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    char N[3] = {};
    cin >> N[0] >> N[1] >> N[2];

    // int N1, N2, N3;
    int N1 = N[0] - '0';
    int N2 = N[1] - '0';
    int N3 = N[2] - '0';

    while (1)
    {
        if (N1 * N2 == N3)
        {
            cout << N1 << N2 << N3 << endl;
            return 0;
        }
        N3++;
        if (N3 == 10)
        {
            N2++;
            N3 = 0;
        }
        if (N2 == 10)
        {
            N1++;
            N2 = 0;
        }
    }

    return 0;
}
