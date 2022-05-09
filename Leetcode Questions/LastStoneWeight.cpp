#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v;
    // v={2,7,4,1,8,1};
    v={1};
      sort(v.begin(),v.end());
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
    while(v.size()>1){
        int x=v[v.size() -1];
        v.pop_back();
        int y=v[v.size() -1];
        v.pop_back();
        if(x<y){
            v.push_back(x-y);
            sort(v.begin(),v.end());
        }
    }
    cout<<v[0];
 return 0;
}