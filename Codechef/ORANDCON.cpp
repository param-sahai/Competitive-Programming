#include <iostream>
#define ll long long
#define max 1000000000
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll X;
        cin >> X;
        ll A=0, B=1, C=2, flag=0;
        for(;A<=max;A++){
            for(;B<=max;B++){
                for(;C<=max;C++){
                    if(((A | B) & (B | C) & (C | A)) == X){
                    cout<<A<<" "<<B<<" "<<C<<"\n";
                    flag=1;
                    break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                    break;
        }
    }
    return 0;
}