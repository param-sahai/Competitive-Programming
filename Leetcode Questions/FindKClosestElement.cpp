#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.second < b.second;
}
void sort(map<int, int>& M)
{
  
    // Declare vector of pairs
    vector<pair<int, int> > A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
  
    // Print the sorted value
    for (auto& it : A) {
  
        cout << it.first << ' '
             << it.second << endl;
    }
}
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int>res;
        map<int, int>absDiff;
        for(int i=0;i<arr.size();i++){
            absDiff[i] = abs(x-arr[i]);
        }
        sort(absDiff);
        int count=0;
        for(auto m:absDiff){
            if(count>=k)
            return res;
            else{
                res.push_back(arr[m.first]);
                count++;
            }
        }
        // for(auto x:absDiff){
        //     cout<<x.first<<" ::::: "<<x.second<<"\n";
        // }
        return res;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 vector<int>arr = {1,2,3,4,5};
 int k = 4;
 int x = -1;
 vector<int>res = findClosestElements(arr, k, x);
 cout<<"Resultant vector\n";
 for(auto x:res){
    cout<<x<<" ";
 }
 return 0;
}