#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    priority_queue <int, vector<int>, greater<int>> g;
	    string str="";
	    int countp=0,countm=0;
	    vector<int>minnum;
	    vector<int>maxnum;
	    cin>>str;
	    for(auto x:str){
	        if(isdigit(x))
	        g.push(int(x)-48);
	        else if(x=='+')
	        countp++;
	        else if(x=='-')
	        countm++;
	    }
		// while(!g.empty()){
			// cout<<countp<<" "<<countm;
		// 	g.pop();
		// }
	    for(int i=1;i<=countm;i++){
	        minnum.push_back(g.top());
	        g.pop();
	    }
		// for(int i=0;i<countm;i++){
	    //     cout<<"-";
	    //     cout<<minnum[i];
	    // }
	    for(int i=1;i<=countp;i++){
	        maxnum.push_back(g.top());
	        g.pop();
	    }
		// for(int i=0;i<countp;i++){
	    //    cout<<"+";
	    //     cout<<maxnum[i];
	    // }
	    vector<int>res;
	    while(!g.empty()){
	        res.push_back(g.top());
			g.pop();
	    }
	    reverse(res.begin(),res.end());
	    for(auto x:res)
	    cout<<x;
	    for(int i=0;i<countp;i++){
	       cout<<"+";
	        cout<<maxnum[i];
	    }
	    for(int i=0;i<countm;i++){
	        cout<<"-";
	        cout<<minnum[i];
	    }
		cout<<"\n";
	}
	return 0;
}