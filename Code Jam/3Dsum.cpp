#include <iostream>
#define ll long long
using namespace std;
ll min(ll a, ll b, ll c)
{
    ll minmin = (a > b) ? b : a;
    return (minmin > c) ? c : minmin;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Ti = 1, T = 1;
    cin >> T;
    while (Ti <= T)
    {
        ll Array[4] = {0, 0, 0, 0};
        ll sum = 1000000;
        ll arr[3][4];
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 4; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll i = 0;
        ll temp;
        while (sum != 0 && i < 4)
        {
            temp = min(arr[0][i], arr[1][i], arr[2][i]);
            if (temp >= 1000000)
                temp = 1000000;
            if (sum <= temp)
                temp = sum;
            sum -= temp;
            Array[i] = temp;
            i++;
        }
        cout << "Case #" << Ti << ": ";
        if (sum == 0)
        {
            for (i = 0; i < 4; i++)
            {
                cout << Array[i]<<" ";
            }
        }
        else
        {
            cout << "IMPOSSIBLE";
        }
        cout << "\n";
        Ti++;
    }

    return 0;
}