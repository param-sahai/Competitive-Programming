#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll b1[100009], b2[100009], b3[100009], b4[100009];
vector<int> C2[100009];
queue<int> V;

void find()
{
    ll A1, A2, A3, A4, A5 = 0; // A1: N
    cin >> A1;
    for (int i = 0; i <= A1; i++)
    {
        b1[i] = b2[i] = b3[i] = b4[i] = 0;
        C2[i].clear();
    }
    for (int i = 1; i <= A1; i++)
    {
        cin >> b1[i];
    }
    for (int i = 1; i <= A1; i++)
    {
        cin >> A2;
        b2[i] = A2;
        C2[A2].push_back(i);
        b4[A2]++;
    }
    for (int i = 0; i <= A1; i++)
        if (b4[i] == 0)
            V.push(i);
    while (!V.empty())
    {
        A2 = V.front();
        V.pop();
        A3 = 1 << 30;
        for (int i = 0; i < C2[A2].size(); i++)
        {
            if (b3[C2[A2][i]] < A3)
            {
                A3 = b3[C2[A2][i]];
                A4 = i;
            }
        }
        if (A3 == 1 << 30)
            A3 = 0;
        for (int i = 0; i < C2[A2].size(); i++)
            if (i != A4)
                A5 += b3[C2[A2][i]];
        b3[A2] = max(b1[A2], A3);
        b4[b2[A2]]--;
        if (b4[b2[A2]] == 0)
            V.push(b2[A2]);
    }
    cout << A5 + b3[0] << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        find();
    }
    return 0;
}