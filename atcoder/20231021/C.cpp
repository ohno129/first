#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    char A[H + 3][W + 3] = {};
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cin >> A[i][j];
        }
    }

    int count = 0;
    int i1, j1, i2, j2, k, l;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (A[i][j] == '#')
            {
                count++;
                A[i][j] = '.';

                i1 = i, j1 = j;

                k = i, l = j - 1;
                for (; k <= i1 + 1; k++)
                {
                    for (; l <= j1 + 1; l++)
                    {
                        if (A[k][l] == '#')
                        {
                            A[k][l] = '.';

                            i1 = k;
                            j1 = l;
                            k = i1 ;
                            l = j1 - 1;
                            cout << "AAA";
                            break;
                        }
                    }
                }
            }
            cout << count;
        }
        cout << endl;
    }

    cout << count << endl;

    return 0;
}
