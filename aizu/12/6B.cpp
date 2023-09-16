#include <iostream>
using namespace std;

int main()
{
    int n, r, gyou, retu;
    int a[4][13] = {};
    char m;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (m == 'S')
        {
            gyou = 0;
        }
        else if (m == 'H')
        {
            gyou = 1;
        }
        else if (m == 'C')
        {
            gyou = 2;
        }
        else if (m == 'D')
        {
            gyou = 3;
        }

        cin >> r;
        retu = r - 1;

        a[gyou][retu] = 1;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (a[i][j] == 0)
            {
                if (i == 0)
                {
                    cout << "S " << j + 1 << "\n";
                }
                if (i == 1)
                {
                    cout << "H " << j + 1 << "\n";
                }
                if (i == 2)
                {
                    cout << "C " << j + 1 << "\n";
                }
                if (i == 3)
                {
                    cout << "D " << j + 1 << "\n";
                }
            }
        }
    }

    return 0;
}
