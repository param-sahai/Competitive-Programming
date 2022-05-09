#include <iostream>
#include <iomanip>
#include <ios>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long
#define f(j, x, y) for (ll j = x; i < y; j++)
#define rf(k, x, y) for (ll k = x; k >= y; k--)
#define pb push_back
#define long_vec vector<long long>
#define vc vector
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        long_vec a(n);
        f(i, 0, n)
                cin >>
            a[i];
        long_vec b(n);
        f(i, 0, n)
                cin >>
            b[i];
        vc<long_vec> slots(n);
        f(i, 0, n)
            slots[b[i]]
                .pb(a[i]);
        vc<double> dp(n + 1, 0);
        multiset<ll> s;
        f(i, 1, n + 1)
        {
            for (auto &j : slots[i - 1])
                s.insert(j); 
            if (s.size())
            {
                dp[i] = dp[i - 1];
                auto it = s.end();
                it--;
                dp[i]+ = it;
                s.erase(it);
            }
            else
                break;
        }
        f(i, 1, n + 1)
            dp[i] /= i;
        double ans = max_element(all(dp));
        cout << fixed << setprecision(6) << ans << endl;
    }
    return 0;
}