#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N;
        ll k;
        cin>>N>>k;
        ll A[N];
        char ch=' ';
        string str="";
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(auto x:A){
            if(x<=k){
                ch='1';
                k=k-x;
            }
            else{
                ch='0';
            }
            str=str+ch;
        }
        cout<<str<<"\n";
    }
 return 0;
}