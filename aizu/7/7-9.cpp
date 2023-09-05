#include<iostream>
using namespace std;

int main()
{
    bool A=true,B=false,C=true;

    cout<<(A&&!B&&C)<<" "
        <<(A&&B||C!=B)<<" "
        <<(A&&B||C==B&&A==!B)<<" "
        <<!(A&&B||C==B&&A==!B)<<endl;

    return 0;
}
