#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        ll count=0,sum=0;
        sum=(N*(N+1))/2;
        count=N;
        while(sum%2!=0){
            count=count-1;
            sum=(count*(count+1))/2;
        }
        // cout<<sum<<": "<<count<<"\n";
        cout<<count<<"\n";
    }
 return 0;
}