#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    cout << str1;
    if (str1 == str2)
        cout << " == ";
    else if (str1 < str2)
        cout << " < ";
    else if (str1 > str2)
        cout << " > ";
    cout << str2 << endl;

    return 0;
}
