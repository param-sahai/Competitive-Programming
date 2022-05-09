#include<iostream>
#define ll long long
using namespace std;
int isInteresting(ll k){
    if(k<10){
        return 1;
    }
    else{
        ll n=k;
        ll prod=1,sum=0,r=0;
        while(n>0){
            r=n%10;
            prod=prod*r;
            sum=sum+r;
            n=n/10;
        }
        if(prod%sum==0)
        return 1;
        else
        return 0;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        ll A=0,B=0,count=0;
        cin>>A>>B;
        for(ll k=A;k<=B;k++){
            if(isInteresting(k)==1)
            count++;
        }
        cout<<"Case #"<<t<<": "<<count<<"\n";
    }
 return 0;
}