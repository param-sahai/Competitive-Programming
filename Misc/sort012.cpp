#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> res;
    int n;
    cout<<"Enter number of elements to be entered: ";
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int count1=0,count2=0,count0=0;
    //display vector
    for(auto x:v){
        if(x==0)
        count0++;
        else if(x==1)
        count1++;
        if(x==2)
        count2++;
        cout<<x<<" ";
    }
    //counting 0,1,2
    while(count0--){
        res.push_back(0);
    }
    while(count1--){
        res.push_back(1);
    }
    while(count2--){
        res.push_back(2);
    }
    cout<<"\nResultant array:\n";
    for(auto x:res){
        cout<<x<<" ";
    }
 return 0;
}