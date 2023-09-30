#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    if (S.find("ABC") == std::string::npos)
        cout << "-1" << endl;
    else
        cout << S.find("ABC") + 1 << endl;

    return 0;
}