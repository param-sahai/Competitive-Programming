#include<iostream>
#include<queue>
using namespace std;
int main()
{
 priority_queue<int>pq;
 vector<int>v={8,6,4,10,9};
 vector<int>res;
 int k=3;
 for(auto x:v){
     pq.push(x);
 }
 while(k--){
     res.push_back(pq.top());
     pq.pop();
 }
 for(auto x:res){
     cout<<x<<" ";
 }
 return 0;
}