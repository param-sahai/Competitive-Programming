#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f(ll i,ll j, ll *A,ll N){ //returns bitwise AND
    ll k=i;
    while(k<=j){
        A[k]=33554431;
        k++;
    }
    k=A[0];
    for(ll t=0;t<N;t++){
        k=(k & A[t]);
    }
    return k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    ll N, sum=0;
    for(int t=0;t<T;t++){
        cin>>N;
        ll *A=new ll(N);
        for(ll i=0;i<N;i++){
            cin>>A[i];
        }

        for(ll i=0;i<N;i++){
            for(ll j=i;j<N;j++){
                sum=sum+f(i,j,A,N);
            }
        }
        sum=sum-f(0,N-1,A,N);
        cout<<sum<<"\n";
    }
    return 0;
}