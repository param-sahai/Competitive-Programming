#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
    {
        ll Array[4],flag=0;
        for (ll i = 0; i < 4; i++)
        {
            cin >> Array[i];
        }
        sort(Array, Array + 4);
        // for(auto x: Array){
        //     cout<<x<<" ";
        // }
        ll S = 0, P = 0;
        ll P1 = Array[3];
        ll S1 = Array[2];
        ll P2 = Array[2];
        ll S2 = Array[3];
        ll D = 0, div = 0;
        if (((S1 * S1) - 4 * P1) == (Array[0] * Array[0]))
        {
            S = S1;
            P = P1;
            D = Array[0];
            div = Array[1];
        }
        else if (((S1 * S1) - 4 * P1) == (Array[1] * Array[1]))
        {
            S = S1;
            P = P1;
            D = Array[1];
            div = Array[0];
        }
        else if (((S2 * S2) - 4 * P2) == (Array[0] * Array[0]))
        {
            S = S2;
            P = P2;
            D = Array[0];
            div = Array[1];
        }
        else if (((S2 * S2) - 4 * P2) == (Array[1] * Array[1]))
        {
            S = S2;
            P = P2;
            D = Array[1];
            div = Array[0];
        }
        else
        {
            flag=1;
            cout<<"-1 -1\n";
        }
        if(flag!=1){
        ll a = (S + D) / 2;
        ll b = (S - D) / 2;
        // if (((S + D) % 2) != 0 || ((S - D) % 2) != 0)
        // {
        //     cout << "-1 -1\n";
        // }

        // cout<<"S: "<<S<<"\n";
        // cout<<"P: "<<P<<"\n";
        // cout<<"D: "<<D<<"\n";
        // cout<<"a: "<<a<<"\n";
        // cout<<"b: "<<b<<"\n";
        if(a<1 || b<1 || a>10000 || b>10000)
        cout<<"-1 -1\n";
        else if ((a / b) == div)
            cout << a << " " << b << "\n";
        else if((a / b) != div)
            cout << "-1 -1\n";
        }
    }
    return 0;
}