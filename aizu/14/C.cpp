#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, s[1001] = {}, sum = 0;
    double m, A = 0.0;

    while (1)
    {
        sum = 0;
        A = 0.0;

        cin >> n;
        if (n == 0)
            break;

        for (int i = 1; i <= n; i++)
        {
            cin >> s[i];
            sum += s[i];
        }
        m = double(sum) / double(n);

        for (int i = 1; i <= n; i++)
        {
            A += (s[i] - m) * (s[i] - m);
        }
        A = A / double(n);

        cout << fixed << setprecision(5) << sqrt(A) << "\n";
    }

    return 0;
}
