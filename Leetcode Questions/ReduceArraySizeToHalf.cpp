#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int minSetSize(vector<int>& arr) {
        unordered_map<int, int>freq;
        for(auto x:arr){
            freq[x]++;
        }
        vector<int>v;
        for(auto x:freq){
            v.push_back(x.second);
        }
        int s=0,cnt=0;
        sort(v.begin(),v.end());
        for(int i=(v.size()-1);i>=0;i--){
            if(s<(arr.size()/2)){
                s+=v[i];
                cnt++;
            }
            else
                break;
        }
        return cnt;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>vec = {3,3,3,3,5,5,5,2,2,7};
 cout<<minSetSize(vec);
 return 0;
}