#include <iostream>
using namespace std;

int main()
{
    int i = 1, x = 0;
    while (1)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        cout << "Case " << i << ": " << x << "\n";
        i++;
    }

    return 0;
}
