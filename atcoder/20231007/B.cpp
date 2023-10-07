#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count[N + 1] = {};
    char S[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (S[i][j] == 'o')
                count[i + 1]++;
        }
    }

    for (int j = N; j >= 0; j--)
    {
        for (int i = 1; i <= N; i++)
        {
            if (count[i] == j)
                cout << i;
            if (count[i] == j && j != 0)
                cout << " ";
        }
    }
    cout << endl;

    return 0;
}
