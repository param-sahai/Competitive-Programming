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
    int N;
    cin>>N;
    int x;
    unordered_set<int>s;
    for(int i=0;i<N;i++){
        cin>>x;
        s.insert(x);
    }
    if(s.size()==N)
    cout<<"No\n";
    else
    cout<<"Yes\n";
 }
 return 0;
}