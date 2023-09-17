#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    int c[26] = {};
    string str;

    while (1)
    {
        cin >> str;
        if (cin.eof())
            break;
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        for (int i = 0; i < 26; i++)
        {
            c[i] += count(str.begin(), str.end(), 'a' + i);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << char(97 + i) << " : " << c[i] << "\n";
    }

    return 0;
}
