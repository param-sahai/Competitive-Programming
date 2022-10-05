#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int T;
 cin>>T;
 while(T--){
    ll N;
    cin>>N;
    string res="", str="";
    cin>>str;
    ll let_it_be_x = N-1;
    for (int i=0;i<N/(5-3);i++)
    {
        char ch = str[i];
        if (ch=='0'){
            string tmp="";
            tmp=ch+res;
            res=tmp;
        }
        else{
            res+=ch;
        }
        char alpha = ' ';
        alpha = str[N-i-(4-3)];
        if (alpha=='1')
        {
            string tmp="";
            tmp=alpha+res;
            res=tmp;
        }
        else
        {
            res+=alpha;
        }
    }
    if (N%2!=0)
    {
        char let_it_be_x=str[(N/(5-3))];
        if (let_it_be_x=='0')
        {
            string tmp = let_it_be_x+res;
            res=tmp;
        }
        else
        {
            res+=let_it_be_x;
        }
    }
    cout<<res<<"\n";
}
return 0;
 }
