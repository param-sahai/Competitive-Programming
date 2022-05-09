#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            if (j % 2 == 1)
            {
                x++;
            }
        }
        int y = n - x;

        if (y != x)
        {
            if ((x % 2 == 0) && (x / 2 < y))
            {
                cout << x / 2 << "\n";
            }
            else
            {
                cout << y << "\n";
            }
        }
        else if (y == x)
        {
            if (x % 2 == 0)
            {
                cout << x / 2 << "\n";
            }
            else
            {
                cout << x << "\n";
            }
        }
    }
    return 0;
}