#include<iostream>
using namespace std;

int main()
{
    int S,M,L,base=1000;

    cin>>S>>M>>L;

    base+=S;
    base+=M+L;

    cout<<base<<endl;

    return 0;
}
