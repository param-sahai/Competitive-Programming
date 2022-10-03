#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int T;
 cin>>T;
 while(T--){
    int n=0,k=0;
    cin>>n>>k;
    int prefixsum[k];
    for(int i=0;i<k;i++){
        cin>>prefixsum[i];
    }
    int flag=0;
    if(k==1){
    cout<<"Yes\n";
    flag=1;
    }
    else{
    vector<int>diff;
    diff.push_back(prefixsum[0]);
    for(int i=1;i<k;i++){
        diff.push_back(prefixsum[i]-prefixsum[i-1]);
    }
    for(int i=1;i<diff.size();i++){
        if(diff[i-1]>diff[i])
        {
            cout<<"No\n";
            flag=1;
        }
    }
    if(flag==0)
    cout<<"Yes\n";
 }
 }
 return 0;
}