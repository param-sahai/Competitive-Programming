#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
 int N,d;
 cin>>N>>d;
 vector<int>expenditure;
 int x;
 for(int i=0;i<N;i++){
    cin>>x;
    expenditure.push_back(x);
 }
 int j=d;
 auto start = expenditure.begin();
 auto end = expenditure.end();
 queue<int>v;
 copy(start,end,v);
 vector<int>sortv;
 int notice=0;
 while(j<N){
    copy(v.front(),v.back(),sortv);
    sort(sortv.front(),sortv.back());
    int mdn = 0;
    if(sortv.size()%2==0){
        mdn = (sortv[N/2] + sortv[(N/2) - 1])/2;
    }
    else
    mdn = sortv[N/2];
    if(expenditure[j]>=(2*mdn))
    notice++;
    v.pop();
    v.push(expenditure[j]);
    j++;
    
 }
 cout<<notice<<"\n";
 return 0;
}