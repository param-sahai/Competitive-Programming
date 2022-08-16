#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int firstUniqChar(string s) {
        unordered_map<char, pair<int,int>>freq;
        int res=-1; int mn = s.size()+1; char c = ' ';
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            freq[ch] = make_pair((freq[ch]).first+1, i);
        }
        //Checking the map
        // for(auto m:freq){
        //     cout<<m.first<<":::"<<m.second.first<<", "<<m.second.first<<"\n";
        // }
        
        //Here we are checking for the minimum position (index).
        for(auto m:freq){
            if(m.second.first==1){
                mn = min(mn, m.second.second);
            }
        }

        return (mn==s.size()+1)?-1:mn;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string str= "";
cin>>str;
cout<<firstUniqChar(str)<<"\n";
 return 0;
}