#include <iostream>
using namespace std;

int main()
{
    int n, min = 1000001, max = -1000001;
    long long sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a_i;
        cin >> a_i;
        sum += a_i;
        if (a_i > max)
        {
            max = a_i;
        }
        if (a_i < min)
        {
            min = a_i;
        }
    }

    cout << min << " " << max << " " << sum << endl;

    return 0;
}
