#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int W[N + 1], X[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> W[i] >> X[i];
    }

    int max = 0, time = 0, sum = 0;
    for (time = 0; time <= 24; time++)
    {
        for (int i = 1; i <= N; i++)
        {
            if ((9 <= ((X[i] + time) % 24)) && (((X[i] + time) % 24) <= 17))
            {
                sum += W[i];
            }
        }
        if (sum > max)
            max = sum;
        sum = 0;
    }

    cout << max << endl;

    return 0;
}
