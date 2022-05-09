#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
void max_min()
{
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (ll j = 0; j < N; j++)
    {
        cin >> A[j];
    }
    sort(A.begin(), A.end());
    cout << (A[min(K, N - 1)]) << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        max_min();
    }
    return 0;
}