#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c;

    if (c > a && c > b)
    {
        z = c;
        if (b > a)
        {
            x = a;
            y = b;
        }
        else
        {
            x = b;
            y = a;
        }
    }

    else if (b > a && b > c)
    {
        z = b;
        if (a > c)
        {
            x = c;
            y = a;
        }
        else
        {
            x = a;
            y = c;
        }
    }

    else if (a > b && a > c)
    {
        z = a;
        if (b > c)
        {
            x = c;
            y = b;
        }
        else
        {
            x = b;
            y = c;
        }
    }

    cout << x << " " << y << " " << z << endl;

    return 0;
}
