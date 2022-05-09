#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
// void display(vector<ll> v){
//     cout<<"\n";
//     for(auto x:v){
//         cout<<x<<" ";
//     }
//     cout<<"\n";
// }
// void displayPair(vector<pair<ll,ll>> v){
//     cout<<"\n";
//     for(auto x:v){
//         cout<<x.first<<" "<<x.second<<"\n";
//     }
//     cout<<"\n";
// }
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	  ll n,r;
      cin>>n>>r;
      vector<ll>cost(n);
      vector<ll>cb(n);
      vector<ll>ec(n);

      for(int i=0;i<n;i++){
          cin>>cost[i];
      }
    //   display(cost);  
      for(int i=0;i<n;i++){
          cin>>cb[i];
      }  
    //   display(cb);  
      for(int i=0;i<n;i++){
          ec[i]=(cost[i]-cb[i]);
      }
    //   display(ec);  
      vector<pair<ll,ll>>p;
      for(int i=0;i<n;i++){
          p.push_back(make_pair(ec[i],cost[i]));
      }
    //   displayPair(p);  
      int count=0;
      sort(p.begin(),p.end());
      int j=0;
      while(j<n){
          while(r>=p[j].second){
              r=r-p[j].first;
              count++;
          }
        j++;
      }
      cout<<count<<"\n";


      
	}
 return 0;
}