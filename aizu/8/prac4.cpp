#include<iostream>
using namespace std;

int main()
{
    int W,H,x,y,r;
    int x_r,x_l,y_u,y_b;
    
    cin>>W>>H>>x>>y>>r;

    x_r=x+r,x_l=x-r,y_u=y+r,y_b=y-r;

    if(0<=x_l&&x_r<=W&&0<=y_b&&y_u<=H) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
