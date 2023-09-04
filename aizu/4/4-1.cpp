#include <cstdio>

int main()
{
    int a=5,b=8,t;

    t=a;
    a=b;
    b=t;

    printf("a=%d\nb=%d\nt=%d\n",a,b,t);

    return 0;
}
