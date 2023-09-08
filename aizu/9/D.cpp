#include <iostream>
using namespace std;

int main()
{
    int a, b, c, A = 0;
    cin >> a >> b >> c;

    while (a <= b)
    {
        if ((c % a) == 0)
        {
            A++;
        }
        a++;
    }
    cout << A << endl;

    return 0;
}
