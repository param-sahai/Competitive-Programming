#include<iostream>
#include<vector>
using namespace std;
/* Using Traditional Recursive Method*/
// int f(int n){
//     if(n<=1)
//     return n;
//     else
//     return f(n-1) + f(n-2);
// }
/* Using DP 1st Method MEMOIZATION*/
// int f(int n, vector<int> &dp){
//     if(n<=1)
//     return n;
//     if(dp[n]!=-1)
//     return dp[n];

//     return dp[n]=f(n-1, dp) + f(n-2, dp);
// }
/* Using DP 2nd Method TABULATION*/
// int f(int n){
//     vector<int> dp(n+1, -1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }
/* Using DP 3rd Method OPTIMIZATION*/
int f(int n){
    int prev=0;
    int prev2=1;
    for(int i=2;i<=n;i++){
        int cur_i = prev2 + prev;
        prev2 = prev;
        prev = cur_i;
    }
    return prev;
}

int main()
{
    int n=0;
    cout<<"Enter the number to find the fibonnaci: ";
    cin>>n;
    cout<<f(n);
 return 0;
}
