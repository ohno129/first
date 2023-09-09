#include <iostream>
using namespace std;

void swap1(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}
void swap2(int *X, int *Y)
{
    int t = *X;
    *X = *Y;
    *Y = t;
}

int main()
{
    int a, b;
    int *A = &a, *B = &b;
    cin >> a >> b;

    swap1(a, b);
    cout << a << " " << b << "\n";
    swap2(A, B);
    cout << a << " " << b << endl;

    return 0;
}
