#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,N=0;
    cin>>T;
    while (T--)
    {
        cin>>N;
        if(N%4 == 0)
        cout<<"Good\n";
        else
        cout<<"Not Good\n";
    }
 return 0;
}