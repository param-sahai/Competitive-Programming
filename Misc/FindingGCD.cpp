#include<bits/stdc++.h>
using namespace std;
int findGCD(int val1, int val2){
    if(val1==0)
        return val2;
    else if(val2==0)
        return val1;
    else if(val1<val2){
            swap(val1, val2);
            return findGCD(val2, val1%val2);
        }
    else{
        return findGCD(val2, val1%val2);
    }
}
int main()
{
    int val1=0, val2=0;
    cin>>val1>>val2;
    cout<<findGCD(val1, val2);
    
    return 0;
}