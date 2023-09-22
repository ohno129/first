#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string moji, moji2, temp;
    int m, h;

    while (1)
    {
        cin >> moji;
        if (moji == "-")
            break;
        cin >> m;

        for (int i = 1; i <= m; i++)
        {
            cin >> h;
            moji = (moji.erase(0, h) + moji.substr(0, h));
        }
        cout << moji << "\n";
    }

    return 0;
}
