#include <iostream>
using namespace std;

int main()
{
    int H, W;

    while (1)
    {
        cin >> H >> W;
        if (H == 0 && W == 0)
        {
            break;
        }
        for (int j = 1; j <= H; j++)
        {
            if (j == 1 || j == H)
            {
                for (int i = 1; i <= W; i++)
                {
                    cout << "#";
                }
            }
            else
            {
                for (int i = 1; i <= W; i++)
                {
                    if (i == 1 || i == W)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            cout << "\n";
        }
        cout << endl;
    }

    return 0;
}
