class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<string>powers;
        for(int i=0;i<=30;i++){
            powers.push_back(to_string((int)pow(2,i)));
        }
        for(int i=0;i<=30;i++){
            sort(powers[i].begin(), powers[i].end());
        }
         string str = to_string(n);
         sort(str.begin(), str.end());

         for(int i=0;i<=30;i++){
            if(powers[i]==str)
            return true;
         }
         return false;
    }
};