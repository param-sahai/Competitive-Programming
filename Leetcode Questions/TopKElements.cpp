#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
        vector<int>nums;
        nums={2,1,2,1,1,4,4,2,3,2};
        int k=2;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>v;
        // multimap<int,int>MM;
        // for (auto it : mp) {
        // MM.insert({ it.second, it.first });
        // v.push_back(it.second);
        // }
        // sort(v.begin(),v.end());
        // for(auto x:MM){
        //     cout<<x.second<<": "<<x.first<<"\n";
        // }
        for(auto x:mp){
            v.push_back(make_pair(x.first,x.second));
        }
        sort(v.begin(),v.end());
        for(auto x:v){
            cout<<x.first<<": "<<x.second<<"\n";
        }
        // for(int i=v.size()-1;(v.size()-i)<=k;i--){
        //     cout<<MM
        // return nums;
 return 0;
}