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
    for(int t=1;t<=T;t++){
        string I="";
        string P="";
        cin>>I>>P;
        ll i=0,j=0,count=0;
        cout<<"Case #"<<t<<": ";
        if(I.length()>P.length()){
            cout<<"IMPOSSIBLE\n";
        }
        else{
            while(j<I.length() && i<P.length()){
                if(P[i]==I[j]){
                    i++;
                    j++;
                    count++;
                }
                else{
                    i++;
                }
            }
            if(count==I.length()){
                cout<<(P.length()-I.length())<<"\n";
            }
            else{
                cout<<"IMPOSSIBLE\n";
            }
        }
    }
 return 0;
}