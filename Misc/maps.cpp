#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements to be stored: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    for(auto x:v){
        cout<<x<<" ";
    }

    unordered_map<int,int>m;
    for(auto x:v){
        m[x]++;
    }
    cout<<endl;
    for(auto x:m){
        cout<<x.first<<"->"<<x.second<<"\n";
    }
 return 0;
}