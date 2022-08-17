#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int uniqueMorseRepresentations(vector<string>& words) {
    string charToMorse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int cnt = words.size();
    unordered_map<string, bool>isVisited;
    for(auto word:words){
        string morse="";
        for(auto letter:word){
            morse+=charToMorse[letter-97];
        }
        if(isVisited[morse]){
        cnt--;
        }
        else
            isVisited[morse]=true;
    }
    return cnt;    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<string>vec = {"gin","zen","gig","msg"};
 cout<<uniqueMorseRepresentations(vec);
 return 0;
}