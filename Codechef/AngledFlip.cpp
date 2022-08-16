#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin>>T;
while(T--){
    int N,M;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M));
    vector<vector<int>>B(N, vector<int>(M));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){   
            cin>>A[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>B[i][j];
        }
    }
    if(N==1 || M==1)
    {
        if(A==B)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    else
    {
        multiset<int>A1,A2,B1,B2;
       for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if((i+j)%2==0){
            A1.insert(A[i][j]);
            B1.insert(B[i][j]);
            }
            else{
            A2.insert(A[i][j]);
            B2.insert(B[i][j]); 
            }
        }
       }
       if(A1==B1 && A2==B2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
 return 0;
}