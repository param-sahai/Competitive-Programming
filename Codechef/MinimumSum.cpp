#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        int s=0;
        sort(A,A+N);
        for(int i=0;i<N/2;i++){
            A[N-i-1]=__gcd(A[i],A[N-i-1]);
            s+=A[i]+A[N-i-1];
        }
        if(N%2!=0)
        s+=A[(N/2)+1];
        cout<<s<<"\n";
    }
	return 0;
}
