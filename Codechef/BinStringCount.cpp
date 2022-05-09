#include<iostream>
#include<string>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin>>T;
while(T--){
    int N=0,X=0,Y=0,count_1=0,count_0=0,res=0;
    cin>>N>>X>>Y;
    string S="";
    cin>>S;
    for(auto x:S){
        if(x=='1')
        count_1+=1;
        else if(x=='0')
        count_0+=1;
    }
    if(count_0>0 && count_1>0)
    res=min(X,Y);
    
    cout<<res<<"\n";
}
 return 0;
}