#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, K, sum = 0, score = 0;
        cin >> N >> M >> K;
        int A[N + 1];
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        if (sum == N)
        {
            score = 100;
        }
        else if (sum != N)
        {
            int flag = 0;
            for (int i = 1; i <= M; i++)
            {
                if (A[i] == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {
                score = K;
            }
        }
        cout << score << "\n";
    }
        return 0;
}