#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int A[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if (A[i][j] == A[i + 1][j])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (A[i][j] == A[i][j + 1])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
