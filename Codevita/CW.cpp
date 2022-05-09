#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<unordered_map>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
string res="";
void substr(string S, string word){
    unordered_map<char,int> freq2;
    for(auto x:word){
            freq2[x]++;
        }
    for(auto x:S){
        for(int i=0;i<freq2[x];i++)
            res=res+x;
    }
    res=res+" ";
}

void SeperateWrd(string S, string C)
{

    istringstream ss(C);
  
    string word; 
  
    while (ss >> word) 
    {
        substr(S,word);
    }
}

int main()
{
    string S="";
    getline(cin,S);
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    string C="";
    getline(cin,C);
    transform(C.begin(), C.end(), C.begin(), ::tolower);
    map<char,int> freq1;
    
    unordered_map<char,int> freq3;

    for(auto x:S){
        if(x!=' '){
            if(freq1[x]!=0){
                cout<<"New Language Error";
                return 0;
            }
            else
            freq1[x]++;
        }
    }
    SeperateWrd(S,C);
    int ln=res.length();
    for(int i=0;i<ln-1;i++)
    cout<<res[i];
 return 0;
}