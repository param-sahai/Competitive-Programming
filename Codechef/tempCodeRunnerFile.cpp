#include <bits/stdc++.h>
using namespace std;

void flipSort(){
    int N;
    cin>>N;
    string str;
    cin>>str;
    vector<vector<int>>res;

    for(int i = N-1;i>=0;i--){
      if(str[i]=='0'){
        int x = i+1;
        for(int j = 0;j<=i;j++) {
          if(str[j]=='1') 
          str[j]='0';
          else
           str[j] = '1';
        }
        res.push_back({1ll,x});
      }
    }
    int count = res.size();
    cout<<count<<endl;
    for(auto x:res){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
    flipSort();
    }
 return 0;
}