#include <iostream>
using namespace std;

int main()
{
    int m, f, r;

    while (1)
    {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }

        if (m == -1 || f == -1)
        {
            cout << "F"
                 << "\n";
        }
        else if ((m + f) >= 80)
        {
            cout << "A"
                 << "\n";
        }
        else if ((m + f) >= 65)
        {
            cout << "B"
                 << "\n";
        }
        else if ((m + f) >= 50)
        {
            cout << "C"
                 << "\n";
        }
        else if ((m + f) >= 30)
        {
            if (r >= 50)
            {
                cout << "C"
                     << "\n";
            }
            else
            {
                cout << "D"
                     << "\n";
            }
        }
        else
        {
            cout << "F"
                 << "\n";
        }
    }

    return 0;
}
