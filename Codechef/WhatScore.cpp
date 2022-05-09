#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,sum=0;
        map<int,int>m;
        cin>>N;
        for(int i=1;i<=N;i++){
            int P=0,S=0;
            cin>>P>>S;
            m[P]= ((S>m[P])?S:m[P]);
        }
        for(int P=1;P<=8;P++){
            sum+=m[P];
        }
        cout<<sum<<"\n";
    }
 return 0;
}