#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& num){
    for(auto x:num){
        cout<<x<<" ";
    }
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3(nums1.size() + nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
        // display(nums3);
        cout<<nums3.size()<<"\n\n";
        if(nums3.size()==0)
            return nums3[0];
        else if(nums3.size()%2==0)
            return(( nums3[nums3.size()/2] + nums3[(nums3.size()/2) - 1]) / 2.0);
        else 
            return( nums3[nums3.size()/2] );          
    }
int main()
{
    int m=0,n=0;
    cout<<"Enter the size of two vectors: ";
    cin>>m>>n;
    vector<int>nums1(m);
    vector<int>nums2(n);
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    // cout<<"\nNums1: \n";
    // for(auto x:nums1){
    //     cout<<x<<" ";
    // }
    // cout<<"\nNums2: \n";
    // for(auto x:nums2){
    //     cout<<x<<" ";
    // }
    cout<<findMedianSortedArrays(nums1,nums2);
 return 0;
}