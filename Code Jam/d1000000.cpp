#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin>>T;
    for(ll t=1;t<=T;t++){
        cout<<"Case #"<<t<<": ";
        ll N,count=0;
        cin>>N;
        ll S[N];
        for(ll i=0;i<N;i++){
            cin>>S[i];
        }
        sort(S,S+N);
        for(auto x:S){
            if(count<x){
                count++;
            }
        }
        cout<<count<<"\n";
    }
 return 0;
}