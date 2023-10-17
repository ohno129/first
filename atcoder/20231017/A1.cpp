#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int K;
    cin >> K;

    if (K % 60 < 10)
        cout << 21 + (K / 60) << ":0" << K % 60 << endl;
    else
        cout << 21 + (K / 60) << ":" << K % 60 << endl;

    return 0;
}
