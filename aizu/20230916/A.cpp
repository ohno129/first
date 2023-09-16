#include <iostream>
using namespace std;

int main()
{
    int A, B, A_B = 1, B_A = 1;
    cin >> A >> B;

    for (int i = 0; i < B; i++)
    {
        A_B *= A;
    }
    for (int i = 0; i < A; i++)
    {
        B_A *= B;
    }

    cout << (A_B + B_A) << endl;

    return 0;
}
