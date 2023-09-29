#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, x[101], y[101];
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> y[i];
    }

    double A = 0.0, p = 1.0;
    for (int i = 1; i <= n; i++)
    {
        A += pow(fabs(x[i] - y[i]), p);
    }
    cout << fixed << setprecision(6) << A << endl;

    A = 0.0, p = 2.0;
    for (int i = 1; i <= n; i++)
    {
        A += pow(fabs(x[i] - y[i]), p);
    }
    cout << fixed << setprecision(6) << sqrt(A) << endl;

    A = 0.0, p = 3.0;
    for (int i = 1; i <= n; i++)
    {
        A += pow(fabs(x[i] - y[i]), p);
    }
    cout << fixed << setprecision(6) << cbrt(A) << endl;

    A=0.0;
    double max=0;
      for (int i = 1; i <= n; i++)
    {
        if(max<fabs(x[i] - y[i]))   max=fabs(x[i] - y[i]);
    }
    cout << fixed << setprecision(6) << max << endl;

    return 0;
}
