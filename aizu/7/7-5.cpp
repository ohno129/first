#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    a=b=c=3;

    bool result1=(a==b==c);
    cout<<result1<<"\n";

    int x=2,y=1,z=0;
    bool result2=(x==y==z);
    cout<<result2<<endl;
}
