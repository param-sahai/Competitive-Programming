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
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            v.push_back(x);
            pq.push(x);
        }
        while(Y>0){
            int mn = pq.top();
            if((mn^X)>mn){
                pq.pop();
                pq.push(mn^X);
                Y--;
            }
            else{
                break;
            }
        }

        if(Y%2!=0){
            int mn = pq.top();
            pq.pop();
            pq.push(mn^X);
        }
        while(pq.size()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<"\n";
    }
 return 0;
}