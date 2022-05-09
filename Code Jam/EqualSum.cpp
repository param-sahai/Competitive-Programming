#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int T, Ti = 1;
    cin >> T;
    while (Ti <= T)
    {
        int N;
        cin>>N;
        int sum = 0;
        vector<int> A;
        for (int i = 1; i <= N; i++)
        {
            A.push_back(i);
            sum = sum + i;
        }
        for (auto x : A)
        {
            cout << x << " ";
        }
        cout << "\n";
        vector<int> B;
        int x = 0;
        for (int i = 1; i <= N; i++)
        {
            cin >> x;
            A.push_back(x);
            sum = sum + x;
        }
        sort(A.begin(), A.end());
        // for(auto x:A){
        //     cout<<x<<" ";
        // }
        // cout<<"\n";
        int s = sum / 2, s1 = 0;
        for (int i=A.size()-1;i>=0;i--)
        {
            if ((s1 + A[i]) <= s)
            {
                B.push_back(A[i]);
                s1 += A[i];
            }
        }
        cout<<"Case #"<<Ti<<": ";
        for (auto x : B)
        {
            cout << x << " ";
        }
        cout << "\n";
        
        Ti++;
    }
    return 0;
}