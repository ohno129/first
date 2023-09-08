#include <iostream>
using namespace std;

int main()
{
    int n, limit = 10, i = 1;
    cin >> n;

    while (i <= n)
    {
        if (limit < i)
            break;
        cout << i++ << " ";
    }

    cout << endl;

    return 0;
}
