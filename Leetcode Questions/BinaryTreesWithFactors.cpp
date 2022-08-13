#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<unordered_map>
#define mod 1000000007
using namespace std;
int numFactoredBinaryTrees(vector<int> &arr){
    sort(arr.begin(),arr.end());
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        int x=arr[i];
        mp[x]++;
        for(int j=0;j<i;j++){
            if((x%arr[j]==0) && (mp[x/arr[j]]!=0))
            mp[x] = (mp[x] + (mp[arr[j]] * mp[x/arr[j]]))%mod;
        }
    }
    int s=0;
    for(int i=0;i<arr.size();i++){
        s+=mp[arr[i]];
    }
    return s%mod;
}
int main()
{
    vector<int> arr = {18,3,6,2};
    cout<<numFactoredBinaryTrees(arr);
 return 0;
}