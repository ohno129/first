#include <iostream>
using namespace std;

int main()
{
    int a, b, d, r;
    double f;
    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = (double)a / b;
    cout << d << " " << r << " " << fixed << f << endl;

    return 0;
}
