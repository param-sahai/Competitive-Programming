#include<iostream>
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
        ll N=0,K=0;
        cin>>N>>K;
        ll E[N];
        ll sum=0,sq_sum=0;
        for(ll i=0;i<N;i++){
            cin>>E[i];
            sum=sum+E[i];
            sq_sum=sq_sum + (E[i]*E[i]);
        }
        // cout<<sum<<" "<<sq_sum<<"\n";
        if(sum==0 && N==1)
        cout<<"-1000000000000000000\n";
        else if(sum==0)
        cout<<"IMPOSSIBLE\n";
        else{
            ll diff=sq_sum-(sum*sum);
            if(diff%(2*sum)==0)
            cout<<diff/(2*sum)<<"\n";
            else
            cout<<"IMPOSSIBLE\n";
        }
    }
 return 0;
}
