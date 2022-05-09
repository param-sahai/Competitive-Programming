#include<iostream>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    ll N, K;
    ll A[N];
    ll sum = 0;
    map<ll, ll> isVisited;
    for (int t = 1; t <= T; t++)
    {
        cin >> N >> K;

        for (ll i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        sort(A, A + N, greater<ll>());

        if (K == 1)
        {
            sum = A[0];
        }
        else if (K == 0)
        {
            sum = 0;
        }
        else
        {
            ll distinct = 0, i = 0;
            while (distinct <= K)
            {
                if (isVisited[A[i]] == 0)
                {
                    distinct++;
                    if (distinct > K)
                        break;
                }
                sum = sum + A[i];
                isVisited[A[i]]++;
                i++;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}