class Solution {
public:
    string reverseWords(string str) {
        string word = "", rev = "";
    for(auto ch:str){
        if(ch==' ' && word=="")
        continue;
        if(ch!=' ')
        word = word + ch;
        else{
        rev = word +" "+ rev ;
        word = "";
        }
    }
    rev = word +" "+ rev;
    rev.pop_back();
    // }
    if((int)word[0]==0)
        rev.erase(0,1);
    return rev;
    }
};