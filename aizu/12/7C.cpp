#include <iostream>
using namespace std;

int main()
{
    int r, c, sum = 0;
    cin >> r >> c;

    int a[r + 1][c + 1] = {};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            a[i][c] += a[i][j];
            a[r][j] += a[i][j];
            sum += a[i][j];
        }
    }

    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i == r && j == c)
            {
                cout << sum;
            }
            else
            {
                cout << a[i][j];
                if (j != c)
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
