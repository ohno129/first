#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    char S[100][100] = {};
    for (int i = 1; i <= A * N; i++)
    {
        if (((i - 1) / A) % 2 == 0)
            for (int j = 1; j <= B * N; j++)
            {
                if (((j - 1) / B) % 2 == 0)
                    cout << ".";
                else
                    cout << "#";
            }
        else
            for (int j = 1; j <= B * N; j++)
            {
                if (((j - 1) / B) % 2 == 0)
                    cout << "#";
                else
                    cout << ".";
            }
        cout << "\n";
    }

    return 0;
}
