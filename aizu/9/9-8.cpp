#include <iostream>
using namespace std;

int div_(int x, int y)
{
    if (y == 0)
    {
        cout << "division by zero." << endl;
        return -1;
    }

    return x / y;
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << div_(x, y) << endl;

    return 0;
}
