#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x1, x2, y1, y2, d;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(5) << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) << endl;

    return 0;
}
