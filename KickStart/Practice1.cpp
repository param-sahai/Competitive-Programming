#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    ll N,M,sum,i=1;
    cin>>T;
    while(T--){
        cin>>N>>M;
        sum=0;
        ll C[N+1];
        for(ll n=1;n<=N;n++){
            cin>>C[n];
            sum+=C[n];
        }
        cout<<"Case #"<<i<<": "<<(sum%M)<<"\n";
        i++;
    }
 return 0;
}