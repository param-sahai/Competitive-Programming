#include<iostream>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin>>T;
while(T--){
    int N=0,M=0,res=0;
    cin>>N>>M;
    if(N<M)
        res=N;
    else
        res=(2*N)-M;
        cout<<res<<"\n";
}
 return 0;
}