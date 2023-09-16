#include <iostream>
using namespace std;

int main()
{
    int n, x, c;

    while (1)
    {
        c = 0;
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k <= n; k++)
                {
                    if (i == j || j == k || k == i)
                    {
                        continue;
                    }
                    if ((i + j + k) == x)
                    {
                        c++;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }

        cout << c / 6 << "\n";
    }

    return 0;
}
