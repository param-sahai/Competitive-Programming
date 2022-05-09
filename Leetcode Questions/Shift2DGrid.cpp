#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> board;
    // board = {{0,1,0},{0,0,1},{1,1,1},{0,0,0}}; 
    board={{1,1},{1,0}};
    int m = board.size();
    int n = board[0].size();
    int val=0,count1=0;
    vector<vector<int>>temp(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            val=board[i][j];
            if((i-1>=0) && (j-1>=0) && board[i-1][j-1]==1)
            count1++;
            if((i-1>=0) &&  board[i-1][j]==1)
            count1++;
            if((i-1>=0) && (j+1<n) && board[i-1][j+1]==1)
            count1++;
            if((j-1>=0) && board[i][j-1]==1)
            count1++;
            if((j+1<n) && board[i][j+1]==1)
            count1++;
            if((i+1<m) && (j-1>=0) && board[i+1][j-1]==1)
            count1++;
            if((i+1<m) &&  board[i+1][j]==1)
            count1++;
            if((i+1<m) && (j+1<n) && board[i+1][j+1]==1)
            count1++;
            if(val==1){
            if(count1<2)
            temp[i][j]=0;
            else if(count1==2 || count1==3)
            temp[i][j]=1;
            else if(count1>3)
            temp[i][j]=0;
            }
            else if(val==0 && count1==3)
            temp[i][j]=1;
            count1=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }
return 0;
}