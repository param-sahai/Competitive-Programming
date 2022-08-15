#include<iostream>
#include<queue>
#include<map>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int N, X, Y;
        cin>>N>>X>>Y;
        vector<int>v(N);
        priority_queue<int, vector<int>, greater<int> > pq;
        priority_queue<int, vector<int>, greater<int> > ptr;
        priority_queue<int, vector<int>, greater<int> > prev;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            v.push_back(x);
            pq.push(x);
        }
        map<priority_queue<int, vector<int>, greater<int>>,int>freq;
        freq[pq]++;
        int y=Y;
        while(freq[pq]!=2 && y<=Y){
            prev = pq;
            int t = pq.top();
            pq.pop();
            pq.push(t^X);
            freq[pq]++;
            y--;
        }

        // for(auto x:freq){
        //     ptr = x.first;
        //     while(!ptr.empty()){
        //         cout<<ptr.top()<<" ";
        //         ptr.pop();
        //     }
        //     cout<<" = = "<<x.second<<"\n";            
        // }




        // while(pq.size()){
        //     cout<<pq.top()<<" ";
        //     pq.pop();
        // }
        // cout<<"\n";
    }
 return 0;
}