#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;
    int N, M;
    cin >> N >> M >> S >> T;

    if (S == T.substr(0, N) && S == T.substr(M - N))
        cout << "0" << endl;
    else if (S == T.substr(0, N))
        cout << "1" << endl;
    else if (S == T.substr(M - N))
        cout << "2" << endl;
    else
        cout << "3" << endl;

    return 0;
}