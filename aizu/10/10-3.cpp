#include <iostream>
using namespace std;

int main()
{
    int t = 20, v0 = 14;
    double a = 2 + 0.80665;

    cout << v0 / 5 << "\n"
         << v0 / 5.0 << "\n"
         << v0 * t + (a * t * t) / 2 << endl;

    return 0;
}
