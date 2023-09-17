#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, sss, p;

    cin >> s >> p;
    sss = s + s + s;

    if (sss.find(p) == string::npos)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
