#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int threeSumMulti(vector<int>& arr, int target) {
        // sort(arr.begin(),arr.end());
        // int i=0,j=1,k=2;
        int count=0;
        for(int i=0;i<arr.size();i++){
            // for(int j=i+1;j<arr.size();j++){
            //     for(int k=j+1;k<arr.size();k++){
            //         if((arr[i]+arr[j]+arr[j])==target){
            //         cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"\n";
            //             count++;
            //         }
            //     }
            // }
            cout<<arr[i]<<" ";
        }
        return count;
    }
int main()
{
    vector<int>v;
    // arr = [1,1,2,2,3,3,4,4,5,5], target = 8
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    int target=8;
    // cout<<threeSumMulti(v,target);
 return 0;
}