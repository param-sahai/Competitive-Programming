#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int findMajority(vector<int> &v){
    int candidate = -1;
    int vote = 0;
    for(auto x:v){
        if(vote==0){
            candidate = x;
            vote++;
        }
        else if(candidate == x){
            vote++;
        }
        else
        vote--;
    }
    return candidate;
}
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
int N = 0;
cout<<"Enter the number of elements: ";
cin>>N;
vector<int>v(N);
for(int i=0;i<N;i++){
    cin>>v[i];
}
cout<<findMajority(v);
 return 0;
}