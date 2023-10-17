#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N, P;
    cin >> N >> P;

    int a[N + 1] = {};
    for (int i = 1; i <= N; i++)
        cin >> a[i];

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i + 1] < P)
            count++;
    }

    cout << count << endl;

    return 0;
}
