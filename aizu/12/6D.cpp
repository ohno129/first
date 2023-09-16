#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m], b[m], c[n] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i] += a[i][j] * b[j];
        }
        cout << c[i] << "\n";
    }

    return 0;
}
