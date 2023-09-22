#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cin >> name;

    name = "Mt. " + name;
    name += ".";

    cout << name << endl;

    return 0;
}
