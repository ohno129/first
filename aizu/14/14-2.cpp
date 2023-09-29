#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int main()
{
    int deg;
    double rad;
    double PI = acos(-1);

    cin >> deg;
    rad = deg * PI / 180;

    printf("%d degree = %lf radian\n", deg, rad);
    printf("cos(%d) = %lf, sin(%d) = %lf\n", deg, cos(rad), deg, sin(rad));

    return 0;
}
