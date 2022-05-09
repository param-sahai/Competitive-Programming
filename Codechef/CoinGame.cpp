#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    int a[n+1];
    for(ll i=0;i<n;i++){
        cin>>a[i+1];
    }
    int so=0,se=0; 
    for(ll i=1;i<=n;i++){
        if(i%2 != 0)
            so=so+a[i];
        else
            se=se+a[i];
    }
    // cout<<so<<" "<<se<<"\n";
        if(so>=se)
        cout<<(2*se);
        else if(se>=so)
        cout<<(2*so);

 return 0;
}