#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, M, A[2000000] = {};
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> A[i];
    }

    int count = 1;
    for (int i = 1; i <= N; i++)
    {
        cout << A[count] - i << endl;
        if (A[count] - i == 0)
            count++;
    }

    return 0;
}