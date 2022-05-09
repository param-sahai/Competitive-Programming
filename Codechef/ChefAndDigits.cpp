#include <iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	    string num="";
        map<char,int>count;
        cin>>num;
        char ch=' ';
        for(int i=0;i<num.length();i++){
            ch=num[i];
            count[ch]++;
        }
        string str="No\n";
        for(auto x:count){
            if(x.second==1)
            str="Yes\n";
        }
        cout<<str;
    }
	return 0;
}
