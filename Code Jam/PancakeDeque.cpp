#include <iostream>
#include <deque>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Ti = 1, T = 1;
    cin >> T;
    while (Ti <= T)
    {
        ll N = 0;
        cin >> N;
        deque<int> D;
        ll x=0;
        for (int i = 0; i < N; i++)
        {
            cin>>x;
            D.push_back(x);
        }
        // cout<<"Deque:\n";
        // for(auto x:D){
        //     cout<<x<<"\n";
        // }
        ll prev = -1, del = 0, count = 0;
        while (D.empty() == false)
        {
            deque<int>::iterator begin = D.begin();
            // cout<<"Begin: "<<*begin<<"\n";
            deque<int>::iterator end = D.end()-1;
            // cout<<"End: "<<*end<<"\n";
            if (*begin <= *end)
            {
                del = *begin;
                D.pop_front();
            }
            else
            {
                del = *end;
                D.pop_back();
            }
            if (del >= prev)
                count++;
            prev = max(del,prev);
        }
        cout << "Case #" << Ti << ": " << count << "\n";
        Ti++;
    }

    return 0;
}