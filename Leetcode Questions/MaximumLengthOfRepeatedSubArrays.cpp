#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        multimap<int,int>pos;
        priority_queue<int>maxCount;
        for(int i=0;i<nums2.size();i++){
            pos.insert(make_pair(nums2[i],i));
        }
        int prev=-1, curr = -1;
        int ele = 0, count=0;
        for(int i=0;i<nums1.size();i++){
            ele = nums1[i];
            if(pos.find(ele)!=pos.end())
            {
                curr = pos.find(ele)->second;
                if(prev==-1 && curr!=-1){
                    count++;
                    prev = curr;
                }
                else if(curr == prev+1){
                    prev = curr;
                    count++;
                }
                else{
                    maxCount.push(count);
                    count=0;
                    prev = -1;
                }
            }
            else{
                maxCount.push(count);
            }

        }
        return maxCount.top();
    }
};
