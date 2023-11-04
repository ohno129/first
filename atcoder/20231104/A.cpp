#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    if ((S.find("ab") != string::npos) | (S.find("ba") != string::npos))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
