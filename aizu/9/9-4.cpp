#include <iostream>
using namespace std;

int main()
{
    int n, limit = 10, i;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (limit < i)
            break;
        cout << i << " ";
    }
    cout << "[" << i << "]" << endl;

    return 0;
}
