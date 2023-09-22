#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int n, score_t = 0, score_h = 0;
    string t, h;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> h;
        if (t > h)
        {
            score_t += 3;
        }
        if (t == h)
        {
            score_t += 1;
            score_h += 1;
        }
        if (t < h)
        {
            score_h += 3;
        }
    }
    cout << score_t <<" "<< score_h << endl;

    return 0;
}
