#include <bits/stdc++.h> 
using namespace std;

int main() {

  long long t;
  cin>>t;
  while(t--){
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>>nums(n,vector<long long>(m));
    for(long long i=0;i<n;i++){
      for(int j=0;j<m;j++)cin>>nums.at(i).at(j);
    }

    bool done=true;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(nums.at(i).at(j)>nums.at(n-1).at(m-1) || nums.at(i).at(j)>nums.at(0).at(0)){
          done=false;
          break;
        }
      }
      if(!done)break;
    }
    if(done)cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}