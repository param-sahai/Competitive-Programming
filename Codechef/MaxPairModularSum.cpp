#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll N,M;
        cin>>N>>M;
        ll A[N];
        ll mx=INT32_MIN;
        for(ll i=0;i<N;i++){
            cin>>A[i];
            mx=max(mx,A[i]);
        }
        ll res=INT32_MIN;
        for(auto x:A){
            res=max(res,max(((x+mx)+(((x-mx)%M + M)%M)),((x+mx)+(((mx-x)%M + M)%M))));
        }
        cout<<res<<"\n";
    }
 return 0;
}