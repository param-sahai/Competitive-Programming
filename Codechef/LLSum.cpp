#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    ll val,sum=0;
    for(int i=0;i<n;i++){
        cin>>val;
        sum=sum+val;
    }
    cout<<sum;
 return 0;
}