#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    char S[H + 1][W + 1] = {}, T[H + 1][W + 1] = {};
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin>>S[i][j];
        }
    }
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin>>T[i][j];
        }
    }

    int A[W+1]={};
    for(int j=1;j<=W;j++){
        for(int i=1;i<=H;i++){
            
        }
    }

    return 0;
}
