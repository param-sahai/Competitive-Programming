#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
	ll T;
	cin>>T;
	while(T--){
	    ll N;
	    cin>>N;
	    ll k=0;
	    vector<ll>v;
	    for(ll i=0;i<N;i++){
	        cin>>k;
	       v.push_back(k);
	    }
	    ll count=0;

	    for(ll i=0;i<N-1;i++){
	        for(ll j=i+1;j<N;j++){
	            if(i<j && ((v[i]+v[j])>=(v[i]*v[j])))
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
