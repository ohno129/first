#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int A[M + 1] = {};
    for (int i = 1; i <= M; i++)
    {
        cin >> A[i];
    }
    char S[N + 1][M + 1] = {};
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> S[i][j];
        }
    }

    int score[N + 1] = {};
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (S[i][j] == 'o')
                score[i] += A[j];
        }
        score[i] += i;
    }

    int max = 0, Nmax;
    for (int i = 1; i <= N; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            Nmax = i;
        }
    }
    cout << max << endl
         << Nmax << endl;

    int co = 0, sa[N + 1] = {};
    for (int i = 1; i <= N; i++)
    {
        if (i = Nmax)
            continue;
        sa[i] = Nmax - score[i];

        for(int j=1;j<M;j++){
            
        }
    }

    return 0;
}
