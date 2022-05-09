#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, N; //X: Total Y:Infected
        cin >> X >> Y;
        N = (Y * 2) + (X - Y);
        if (X == Y)
            N = N - 1;
        cout << N << "\n";
    }
    return 0;
}