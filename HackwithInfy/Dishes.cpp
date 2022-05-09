#include<iostream>
#include<map>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int T=0,N;
    cin>>T;
    while(T--){
        cin>>N;
        int A[N+1];
        map<int,int>count;
        map<int,int>pos;
        for(int i=1;i<=N;i++){
            cin>>A[i];
        }
        int x=0,cnt=0,max=0;
        for(int i=1;i<=N;i++){
            x=A[i];
            if(i==1 || (i!=(pos[x]+1)) ){
                count[x]++;
                pos[x]=i;
                if(count[x]>cnt){
                    cnt=count[x];
                    max=x;
                }
            }
        }
        for(auto y:count){
            cout<<y.first<<": "<<y.second<<"\n";
        }
        cout<<max<<"\n";
    }
 return 0;
}