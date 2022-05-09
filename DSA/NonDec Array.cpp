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
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        B[0]=A[0];
        for(int i=1;i<N;i++){
            if(A[i]==1){
                B[i]=B[i-1];
            }
            else{
                B[i]=A[i];
                int j=2;
                while(( B[i]<=B[i-1] ) && (B[i]%A[i]==0)){
                    B[i]=B[i]*j;
                    j++;
                }
            }
        }
        for(ll i=0;i<N;i++){
            cout<<B[i]<<" ";
        }
        delete(B);
        delete(A);
        T--;
    }
 return 0;
}