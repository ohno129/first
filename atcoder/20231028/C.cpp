#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int A[N] = {};
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);

    // for (int i = 0; i < N; i++)
    // {
    //     cout << A[i] << endl;
    // }

    int n, count = 0, max = 0, i = 0, now;
    int x = A[0];

    while (1)
    {
        if (x + M - 1 == A[N - 1])
            break;

        for (int now = A[i]; now < x + M; now++)
        {
            while (1)
            {
                if (A[i] == now)
                {
                    count++;
                    i++;
                }
                if (A[i - 1] != A[i])
                    break;
            }
        }

        if (count > max)
            max = count;
        count = 0;
        x++;
    }

    cout << max << endl;

    return 0;
}
