#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 1;
    string S, SS, AA, B;
    cin >> S;
    SS = S;
    reverse(SS.begin(), SS.end());

    int K = SS.size();

    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j <= (K - i); j++)
        {
            AA = S.substr(i, j);
            if (SS.find(AA) == string::npos)
            {
                continue;
            }
            else
            {
                int R = AA.size();
                if (R > n)
                {
                    n = AA.size();
                }
            }
        }
    }

    cout << n << endl;

    return 0;
}
