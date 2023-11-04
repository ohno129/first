#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long A, B;
    cin >> B;

    for (A = 1; A <= 30; A++)
    {
        if (round(powl(A, A)) == B)
        {
            cout << static_cast<int>(A) << endl;
            return 0;
        }
    }
    cout << "-1" << endl;

    return 0;
}
