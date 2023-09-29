#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, h, L, S, C, PI = acos(-1);
    cin >> a >> b >> C;

    h = b * sin(PI * C / 180);
    c = sqrt(a * a + b * b - 2 * a * b * cos(PI * C / 180));

    cout << fixed << setprecision(5) << a * h / 2 << endl
         << a + b + c << endl
         << h << endl;

    return 0;
}
