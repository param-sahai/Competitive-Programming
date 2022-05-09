#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 0;
    cin >> T;
    while (T--)
    {
        int D;
        cin >> D;
        string S = "", res = "No\n";
        cin >> S;
        for (auto x : S)
        {
            if (x == '0' || x == '5')
            {
                res = "Yes\n";
                break;
            }
        }
        cout<<res;
    }
    return 0;
}