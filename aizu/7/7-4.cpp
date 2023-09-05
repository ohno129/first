#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    a=b=3,c=7;

    bool r1=(a==b);
    bool r2=(a==c);
    bool r3=(a!=b);
    bool r4=(a!=c);

    cout<<r1<<" "<<r2<<" "<<r3<<" "<<r4<<endl;
}
