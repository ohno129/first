#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string T;
    cin >> T;

    string S[N]={};
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    int k = 0, A[500000] = {};
    for (int i = 0; i < N; i++)
    {
        if (S[i] == T)
        {
            A[k] = i + 1;
            k++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < T.size(); j++)
        {
            if (T.erase(j, 1) == S[i])
            {
                A[k] = i + 1;
                k++;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < S[i].size(); j++)
        {
            if (S[i].erase(j, 1) == T)
            {
                A[k] = i + 1;
                k++;
            }
        }
    }

    cout << k << "\n";
    for (int i = 0; i < k; i++)
    {
        cout << A[i];
        if (i != k - 1)
            cout << " ";
        if (i == k - 1)
            cout << endl;
    }

    return 0;
}
