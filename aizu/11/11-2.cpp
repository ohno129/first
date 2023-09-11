#include <iostream>
using namespace std;

int cnt;

int increment()
{
    int i = 0;
    return cnt++;
}

int main()
{
    int i = 0;
    cnt = 0;
    cout << cnt++ << " ";
    cout << increment() << " ";

    {
        int j = cnt;
        cout << j++ << " ";
        i = j;
    }
    int x = 0;

    cout << i << endl;

    return 0;
}
