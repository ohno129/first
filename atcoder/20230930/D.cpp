#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char P[3][4][4] = {};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cin >> P[i][j][k];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << P[i][j][k];
            }
            cout << "\n";
        }
    }

    return 0;
}