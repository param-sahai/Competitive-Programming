#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll solve(vector<ll> dials, ll n, ll d)
{
    ll min_op = 0;

    for (int i = 0; i < n; i++)
    {
        ll min = *min_element(dials.begin(), dials.end());
        ll max = *max_element(dials.begin(), dials.end());
        if (min == max)
        {
            min_op++;
            break;
        }
        else if (dials[i] == 0 && max != 0)
        {
            if (i == 0)
                dials[i] = 1;
            else
            {
                int start = i, end = i;
                for (int j = i + 1; j < n; j++)
                {
                    if (dials[j] == 0)
                        end = j;
                    else
                        break;
                }
                if (start == end)
                    dials[i] = 1;
                else
                    fill_n(dials.begin() + start, end, 1);
                min_op++;
            }
        }
        else if ((d - 1) == 1 && max == 1 && dials[i] == 1)
            continue;
        else if (max != (d - 1))
        {
            int start = find(dials.begin(), dials.end(), max) - dials.begin();
            int end = start;
            for (int j = start + 1; j < n; j++)
            {
                if (j > (n - 1))
                    break;
                if (dials[j] == max)
                    end = j;
                else
                    break;
            }
            if (start == end)
                dials[start]--;
            else
                fill_n(dials.begin() + start, end, dials[start] - 1);
            min_op++;
        }
        else
        {
            int start = find(dials.begin(), dials.end(), max) - dials.begin();
            int end = start;
            for (int j = start + 1; j < n; j++)
            {
                if (j > (n - 1))
                    break;
                if (dials[j] == max)
                    end = j;
                else
                    break;
            }
            if (start == end && dials[start] == (d - 1))
                dials[start] = 1;
            else
                fill_n(dials.begin() + start, end, 1);
            min_op += 2;
        }
    }

    return min_op;
}

int main()
{
    int T, test = 1;
    cin >> T;
    while (T--)
    {
        ll N, D;
        cin >> N >> D;
        vector<ll> dials(N, 0);
        for (int i = 0; i < N; i++)
            cin >> dials[i];
        cout << "Case #" << test << ": " << solve(dials, N, D) << endl;
        test++;
    }
    return 0;
}