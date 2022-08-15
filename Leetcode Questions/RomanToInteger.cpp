#include<bits/stdc++.h>
using namespace std;
    int romanToInt(string s) {
        unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int result = 0;

        for (int i = 0; i < s.length(); i++)
        {
            // first check if i+1 is outside the bound or not. If not then we're okay and check if the character has less value than the next value.
            // If so, then subtract it from result. But If it's has larger value than the next one, just add to the result. that's it!
            if (i + 1 < s.length() && roman[s[i]] < roman[s[i+1]]) {
                result -= roman[s[i]];
            } 
            else {
                result += roman[s[i]];
            }
        }
        
        return result;
    }
    int main(){
        string str="";
        cout<<"Enter the Roman number: ";
        cin>>str;
        cout<<romanToInt(str);
        return 0;
    }