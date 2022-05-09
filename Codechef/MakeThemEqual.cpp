#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N=0;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<int>odd;
        vector<int>even;
        for(auto x: A){
            if(x%2==0)
            even.push_back(x);
            else
            odd.push_back(x);
        }
        if(odd.empty() || even.empty())
        cout<<"0";
        else
        cout<<(odd.size()/2)<<"\n";
    }
    return 0;
}