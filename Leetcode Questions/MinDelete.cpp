#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main()
{
 string s="";
 cout<<"Enter the string: ";
 cin>>s;
 sort(s.begin(),s.end());
 unordered_map<char,int> char_freq;
 unordered_map<int,int> is_Occurred;
 for(auto x:s){
    char_freq[x]++;
 }
 int count=0;
 for(auto x:char_freq){
    while(is_Occurred[x.second]!=0){
        x.second--;
        count++;
    }
    if(x.second!=0){
        is_Occurred[x.second]=1;
    }
 }
 cout<<count;
 return 0;
}