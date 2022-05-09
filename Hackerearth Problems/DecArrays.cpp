#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    ll N;
    while(T){
        cin>>N;
        ll *A=new ll[N];
        ll *B=new ll[N];
        for(ll i=0;i<N;i++){
            cin>>A[i];
        }
        B[0]=A[0];
        for(ll i=1;i<N;i++){
            if(A[i]==1){
                B[i]=B[i-1];
            }
            else{
                B[i]=A[i];
                ll j=2,k=B[i];
                while(( B[i]<B[i-1] ) && (B[i]%A[i]==0)){
                    B[i]=k*j;
                    j++;
                }
            }
        }
        for(ll i=0;i<N;i++){
            cout<<B[i]<<" ";
        }
        cout<<"\n";
        delete(B);
        delete(A);
        T--;
    }
 return 0;
}