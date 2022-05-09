#include<iostream> 
#include<queue>
#include<vector>
using namespace std; 
void find(int indx,string s,string out,priority_queue<string,vector<string>,greater<string>> &res){ 
    if(indx==s.size()){ 
        if(res.empty()) 
        res.push(out); 
        else{ 
           if(res.top()>out){ 
                res.pop(); 
                res.push(out); 
           } 
        } 
        return; 
    } 
    out+=s[indx]; 
    find(indx+1,s,out+s[indx],res); 
    find(indx+1,s,out,res);  
} 
 
 
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int T,Ti=1;
    cin>>T;
    while(Ti<=T){ 
        string s; 
        cin>>s; 
        priority_queue<string,vector<string>,greater<string>> res; 
        find(0,s,"",res); 
        cout<<"Case #"<<Ti<<": "<<res.top()<<endl; 
        Ti++;
    } 
    return 0; 
}