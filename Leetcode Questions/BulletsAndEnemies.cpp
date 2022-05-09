#include<iostream>
#include<vector>
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
        vector<int> S, P, C;
        int x=0;
        for(int i=1;i<=N;i++){
            cin>>x;
            S.push_back(x);
        }
        for(int i=1;i<=M;i++){
            cin>>x;
            P.push_back(x);
        }
        for(int i=1;i<=M;i++){
            cin>>x;
            C.push_back(x);
        }
        vector<int>count={0};
        int i=0;
        for(int j=0;j<M;j++){
            x=C[j];
            i=0;
            int cnt=count[count.size()-1];
            while(i<(x+cnt) && i<N){
                if(S[i]==0){
                    cnt++;
                }
                else{
                S[i]=S[i]-P[j];
                    if(S[i]<=0)
                        S[i]=0;
                }
                i++;
            }
            count.push_back(cnt);
        }
        for(auto k:S){
            cout<<k<<" ";
        }
        cout<<"\n";
    }
 return 0;
}