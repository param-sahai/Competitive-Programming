#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
	int t; cin >> t;
    while(t--){
        ll n,k,ans=0; cin >> n >> k;
        unordered_map<ll,ll>m;
        for(int i=0;i<n;i++){
            int a; cin >> a;
            m[a]+=a;
        }
        vector<ll>v;
        for(auto i:m){
            if(i.second>0)
            v.push_back(i.second);
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=0;i<min(k,(ll)v.size());i++)
        ans+=v[i];
        cout << ans << '\n';
    }
}