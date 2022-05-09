// Har Har Mahadev
#include<bits/stdc++.h>
using namespace std ;

#define ll              long long 
#define pb              push_back
#define all(v)          v.begin(),v.end()
#define sz(a)           (ll)a.size()
#define F               first
#define S               second
#define INF             2000000000000000000
#define popcount(x)     __builtin_popcountll(x)
#define pll             pair<ll,ll>
#define pii             pair<int,int>
#define ld              long double

template<typename T, typename U> static inline void amin(T &x, U y){ if(y < x) x = y; }
template<typename T, typename U> static inline void amax(T &x, U y){ if(x < y) x = y; }

#ifdef LOCAL
#define debug(...) debug_out(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) 2401
#endif


int _runtimeTerror_()
{
    ll n;
    cin >> n;
    auto pal = [&](ll x) {
    	string s = to_string(x);
    	auto t = s;
    	reverse(all(t));
    	return s == t;
    };
    ll ans = 0;
    for(ll i=1;i*i<=n;++i) {
    	if(n % i == 0) {
    		ans += pal(i);
    		if(i != n / i) {
    			ans += pal(n/i);
    		}
    	}
    }
    cout << ans << "\n";
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef runSieve
        sieve();
    #endif
    #ifdef NCR
        initncr();
    #endif
    int TESTS = 1;
    cin >> TESTS;
    for(int i=1;i<=TESTS;++i) {
    	cout << "Case #" << i << ": ";
    	_runtimeTerror_();
    }
    return 0;
}