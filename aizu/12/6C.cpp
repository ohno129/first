#include <iostream>
using namespace std;

int main()
{
    int n, b, f, r, v;
    int a[12][10] = {};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        a[(b - 1) * 3 + f - 1][r - 1] += v;
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << " " << a[i][j];
        }
        cout << "\n";
        if (((i + 1) % 3) == 0 && (i != 11))
        {
            cout << "####################"
                 << "\n";
        }
    }

    return 0;
}
