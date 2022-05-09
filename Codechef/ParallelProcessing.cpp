#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T,N=0;
    cin>>T;
    while (T--)
    {
        cin>>N;
        ll A[N+1], pre[N+1];
        ll sum=0;
        for(ll i=1;i<=N;i++){
            cin>>A[i];
            sum+= A[i];
            pre[i] = sum;
        }
        ll res = sum; 
for(ll i=1;i<=N;i++){
res = min (max(pre[i], sum - pre[i]) , res);
} 
cout<<res<<endl; 
 return 0;
}