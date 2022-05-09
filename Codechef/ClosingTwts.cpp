#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    string str;
    int t = 0, count = 0;
    char ch;
    unordered_map<int, int> m;
    while (K != -1)
    {
        getline(cin, str);
        char ch = str[6];
        if (isdigit(ch)||(ch=='L'))
        {
            t = (int(str[6]) - 48);
            if(t==28){
                count=0;
                for(int t=1;t<=N;t++){
                    m[t]=0;
                }
            }
            else{
            m[t] = (m[t] + 1) % 2;
            if (m[t] == 0)
            {
                count -= 1;
            }
            else if (m[t] == 1)
            {
                count += 1;
            }
        }
        cout<<count<<"\n";
        }
        K--;
    }
    return 0;
}