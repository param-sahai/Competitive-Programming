#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N=0,X=0;
        cin>>N>>X;
        if(X>((N+1)/2))
            cout<<"-1\n";
        else{
            char res[N]={'a'};
            char ch='b';
            for(int i=0;i<X-1;i++){
                res[i]=ch;
                res[N-(i+1)]=ch;
                ch++;
            }
            for(auto x:res){
                cout<<x;
            }
            cout<<"\n";
        }
    }
}