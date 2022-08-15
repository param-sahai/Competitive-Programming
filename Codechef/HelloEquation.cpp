#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int X;
        string res="NO\n";
        cin>>X;
        for(int a=1;a<X/2;a++){
            if((X-(2*a))%(2+a)==0){
            res="YES\n";
            break;
            }
        }
        cout<<res;
    }
 return 0;
}