#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str, order, temp, p;
    int a, b, q;
    cin >> str >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> order;

        if (order == "print")
        {
            cin >> a >> b;

            cout << str.substr(a, b - a + 1) << "\n";
        }
        else if (order == "reverse")
        {
            cin >> a >> b;

            temp = str;
            reverse(temp.begin(), temp.end());
            if (a == 0)
            {
                str = temp.substr(temp.size() - 1 - b, b - a + 1) + str.substr(b + 1);
            }
            else
            {
                str = str.substr(0, a) + temp.substr(temp.size() - 1 - b, b - a + 1) + str.substr(b + 1);
            }
        }
        else if (order == "replace")
        {
            cin >> a >> b >> p;

            if (a == 0)
            {
                str = str.replace(0, b - a + 1, p);
            }
            else
            {
                str = str.replace(a, b - a + 1, p);
            }
        }
    }
}