#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int A = 1;
    for (int i = 1; i < 16; i += 2)
    {
        if (S.substr(i, 1) == "1")
        {

            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}