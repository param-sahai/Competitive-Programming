#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    ll N;
    cin >> N;
    ll P[N];
    for (ll i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    vector<int> IM;
    vector<int> CA;
    ll IMsum = 0;
    ll CAsum = 0;
    ll startpos = 0;
    ll endpos = N - 1;
    while (startpos < endpos)
    {
        if (P[startpos] > P[endpos] && ((IMsum + P[startpos]) > 0))
        {
            IMsum += P[startpos];
            IM.push_back(P[startpos]);
            startpos++;
        }
        else if (P[endpos] > P[startpos] && ((IMsum + P[endpos]) > 0))
        {
            IMsum += P[endpos];
            IM.push_back(P[endpos]);
            endpos--;
        }
        if (P[startpos] > P[endpos] && ((CAsum + P[startpos]) > 0))
        {
            CAsum += P[startpos];
            CA.push_back(P[startpos]);
            startpos++;
        }
        else if (P[endpos] > P[startpos] && ((CAsum + P[endpos]) > 0))
        {
            CAsum += P[endpos];
            CA.push_back(P[endpos]);
            endpos--;
        }
    }
    if (N % 2 == 0)
    {
        CAsum += P[endpos];
        CA.push_back(P[endpos]);
    }
    else if (N % 2 != 0)
    {
        IMsum += P[endpos];
        IM.push_back(P[endpos]);
    }
    cout << "-------------IM----------\n";
    for (auto x : IM)
    {
        cout << x << " ";
    }
    cout << "\nIMsum" << IMsum << "\n";
    cout << "-------------CA----------\n";
    for (auto x : CA)
    {
        cout << x << " ";
    }
    cout << "\nCAsum" << CAsum << "\n";
    
    return 0;
}