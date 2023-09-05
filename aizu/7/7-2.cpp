#include<iostream>
using namespace std;

int main()
{
    int a=10,b=2,c=0;

    c=(b+=(a-=7));

    cout<<c<<endl;

    return 0;
}
