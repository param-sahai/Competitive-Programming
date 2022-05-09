#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(T--){
        int S=0,CP=0,CB=0;
        cin>>S>>CP>>CB;
        if(CP<=S)
        cout<<"PIZZA"<<"\n";
        else if(CB<=S)
        cout<<"BURGER"<<"\n";
        else
        cout<<"NOTHING"<<"\n";
    }
 return 0;
}