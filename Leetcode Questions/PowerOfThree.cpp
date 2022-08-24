class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        bool res = true;
        
        while(n>1){
            if(n%3==0)
                n=n/3;
            else{
                res = false;
                break;
            }
        }
        return res;
    }
};