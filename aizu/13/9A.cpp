#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int count = 0;
    string W, T;
    cin >> W;
    for (int i = 0; i < W.size(); i++)
    {
        W[i] = tolower(W[i]);
    }

    while (1)
    {
        cin >> T;
        if (T == "END_OF_TEXT")
            break;

        for (int i = 0; i < T.size(); i++)
        {
            T[i] = tolower(T[i]);
        }

        if (T == W)
            count++;
    }

    cout << count << endl;

    return 0;
}
