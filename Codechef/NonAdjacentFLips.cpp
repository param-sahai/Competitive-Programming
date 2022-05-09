#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N=0;
        cin>>N;
        string str = "";
        cin >> str;
        int countOne = 0, count = 0, pass = 0;
        for (auto x : str)
        {
            if (x == '1')
                countOne++;
        }
        if (countOne == 0)
            cout << "0\n";
        else
        {
            do
            {
                int pos = -2;
                for (int i = 0; i < str.length(); i++)
                {
                    if (str[i] == '1' && i != pos + 1)
                    {
                        str[i] = '0';
                        count++;
                        pos = i;
                        if (count == countOne)
                            break;
                    }
                }
                pass++;
            } while (count != countOne);
            cout << pass << "\n";
        }
    }
    return 0;
}