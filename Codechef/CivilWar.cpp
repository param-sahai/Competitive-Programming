#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    ll N, K;
    while (T != 0)
    {
        cin >> N >> K;
        ll Pos[N + 1];

        if (K == 0)
        {
            for (ll i = 1; i <= N; i++)
                cout << i << " ";
            cout << "\n";
        }
        else
        {
            int pos = 0,flag=0;
            for (ll i = 1; i <= N; i++)
            {
                pos = (i + K);
                if (pos > N)
                {
                    pos = pos - N;
                }
                if ( (abs(i - pos)) != K)
                {
                    cout << "CAPTAIN AMERICA EVADES\n";
                    flag=1;
                    break;
                }
                else{
                    Pos[i]=pos;
                }
            }
            if(flag!=1)
            {
                for(ll i=1;i<=N;i++){
                    cout<<Pos[i]<<" ";
                }
                cout<<"\n";
            }
        }
        T--;
    }
    return 0;
}