#include <iostream>
#include <cmath>
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
        int total=0,max=-1,index=-1,count=0;
        int VG[3];
        int TV[3];
        for(int i=0;i<3;i++){
            cin>>VG[i];
        }
        for(int i=0;i<3;i++){
            cin>>TV[i];
            total=total+TV[i];
        }
        for(int i=0;i<3;i++){
            if(TV[i]>max){
            max=TV[i];
            index=i;
            }
            count=count+VG[i];
        }
        count=(count-VG[index])+TV[index];
        if(count >= (ceil(total/2.0)))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}