#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[101] = {};
    for (int i = 0; i < N; i++)
    {
        cin >> A[i + 1];
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (A[i + 1] != A[i + 2])
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
