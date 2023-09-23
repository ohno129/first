#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    int Ni[99998], A = 1;
    cin >> N;

    for (int i = 0; i < N.size(); i++)
    {
        Ni[i] = N[i];
    }

    if (N.size() != 1)
    {
        for (int i = 1; i <= N.size(); i++)
        {
            if (N[i - 1] <= N[i])
                A = 0;
        }
    }

    if (A == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}