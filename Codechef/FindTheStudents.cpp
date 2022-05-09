#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    vector<int>v;
    v.push_back(A[0]);
    int diff=0;
    for(int i=1;i<N;i++){
        diff=A[i]-A[i-1];
        if(diff!=0)
        {
            v.push_back(diff);
        }
    }
    for(auto x:v){
        cout<<x<<"\n";
    }
 return 0;
}