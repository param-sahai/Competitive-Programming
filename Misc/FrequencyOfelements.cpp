#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
 int N;
 cin>>N;
 int arr[N];
 for(int i=0;i<N;i++){
    cin>>arr[i];
 }
 map<int, int>freq;
 for(auto x:arr){
    freq[x]++;
 }
 for(auto x:freq){
    cout<<"Element "<<x.first<<" occurs "<<x.second<<" times\n";
 }

 return 0;
}