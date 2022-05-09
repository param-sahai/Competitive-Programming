#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string str = "";
        cin >> str;
        string zero = "", ones = "";
        for (auto x : str)
        {
            if (x == '0')
                zero += x;
            else if (x == '1')
                ones += '1';
        }
        map<int, char> cnt;
        cnt[zero.length()] = '0';
        cnt[ones.length()] = '1';
        // cout<<zero<<ones<<"\n";
        string sorted = zero + ones;
        cout<<sorted<<"\n";
        int mx = max(zero.length(), ones.length());
        int mn = min(zero.length(), ones.length());
        string res = "";
        for(int k=0;k<N;k++){
                for (int j = 0; j < (mx / mn); j++)
                {
                    k++;
                    res = res + cnt[mx];
                }
                if(k < N)
                res=res+cnt[mn];
    }
    cout<<res<<"\n";
    }
    return 0;
}