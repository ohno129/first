#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int X, Y = 0;
    cin >> X >> Y;

    if (X < Y)
    {
        if ((Y - X) <= 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else if (X > Y)
    {
        if ((X - Y) <= 3)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
