#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double r, S, l;
    cin >> r;

    S = M_PI * r * r;
    l = 2 * M_PI * r;

    cout << fixed << S << " " << l << endl;

    return 0;
}
