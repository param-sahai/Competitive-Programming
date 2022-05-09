#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        char S[N];
        char alpha='a';
        int i=0;
        while(i<N){
            S[i]=alpha;
            ++alpha;
            if(alpha=='{')
            alpha='a';
            i++;
        }
        for(auto x:S){
            cout<<x;
        }
        cout<<"\n";
    }
 return 0;
}