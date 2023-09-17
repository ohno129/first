#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main()
{
    string str, t;
    int n, sum;

    while (1)
    {
        cin >> str;
        if (str == "0")
            break;
        sum = 0;

        for (int i = 0; i < str.size(); i++)
        {
            t = str.substr(i, 1);
            n = stoi(t);
            sum += n;
        }
        cout << sum << "\n";
    }

    return 0;
}
