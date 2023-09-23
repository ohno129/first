#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, X, A[101], AN;
    cin >> N >> X;
    for (int i = 1; i <= (N - 1); i++)
    {
        cin >> A[i];
    }

    int Amax = 0, Amin = 100, Sum = 0;
    for (int i = 1; i <= (N - 1); i++)
    {
        if (Amax < A[i])
            Amax = A[i];
        if (Amin > A[i])
            Amin = A[i];
        Sum += A[i];
    }

    AN = X - Sum + Amin + Amax;
    if (AN > Amax)
    {
        if (Sum - Amin > X)
            cout << AN << endl;
        else
            cout << "-1" << endl;
    }
    else if (Amin > AN)
    {
        if (Sum - Amax > X)
            cout << AN << endl;
        else
            cout << "-1" << endl;
    }
    else if (Amax == Amin)
    {
        cout << Sum - Amin - X << endl;
    }

    else
        cout << AN << endl;

    return 0;
}