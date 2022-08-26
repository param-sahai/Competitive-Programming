#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int powerFunction(int x, int y){
    int res = 1;
    while(y>0){
        if(y%2==0)
        {
            x = x*x;
            y=y/2;
        }
        else{
            res = res*x;
            y--;
        }
    }
    return (res);
}
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
int x=0,y=0;
 cout<<"Enter the value of x and y: ";
 cin>>x>>y;
 cout<<powerFunction(x,y);
 return 0;
}