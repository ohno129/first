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
            for (int i = 1; i <= W; i++)
            {
                cout << "#";
            }
            cout << "\n";
        }
        cout << endl;
    }

    return 0;
}

