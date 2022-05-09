#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
struct Node
{
   ll F=-1;
   Node *next=NULL; 
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin>>T;
    for(ll t=1;t<=T;t++){
        cout<<"Case #"<<t<<": ";
        ll N;
        cin>>N;
        ll F[N+1],P[N+1];
        Node *map[N+1];
        for(ll i=1;i<=N;i++){
            cin>>F[i];
        }
        for(ll i=1;i<=N;i++){
            cin>>P[i];
        }
        for(ll i=1;i<=N;i++){
            Node *ptr=new Node();
            ptr->F=F[i];
            map[i]=ptr;
        }
        // for(ll i=1;i<=N;i++){
        //     cout<<map[i]->F<<"\n";
        // }     
         for(ll i=1;i<=N;i++){
             if(P[i]==0){
             map[i]->next=NULL;
             }
             else{
                 map[i]->next=map[P[i]];
             }
        } 
        for(ll i=1;i<=N;i++){
            Node *ptr=new Node();
            ptr=map[i];
            while(ptr->next!=NULL){
                cout<<ptr->F<<" ";
                ptr=ptr->next;
            }
        } 
    }
 return 0;
}