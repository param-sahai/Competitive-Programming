#include<iostream>
#include<vector>
using namespace std;
int f(int *Arr,int N,int i,int j){
    vector<int> isVisited(N+1,0);
    int s=0;
    while(i<=j){
        if(isVisited[Arr[i]]!=1){
            s=s+1;
            isVisited[Arr[i]]=isVisited[Arr[i]]+1;
        }
        i++;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N=0,Q=0,q;
    cin>>N>>Q;
    int *Arr=new int[N];
    
    for(int i=0;i<N;i++){
        cin>>Arr[i];
    }
    int x,y,k;
    while(Q!=0){
        cin>>q;
        if(q==1){
            cin>>x>>y;
            Arr[x-1]=y;
        }
        else if(q==2){
            cin>>k;
            int sum=0;
            for(int i=0;i<=(k-1);i++){
                for(int j=i;j<=(k-1);j++){
                    sum=sum+f(Arr,N,i,j);
                }
            }
            cout<<sum<<"\n";
        }
        Q--;
    }
 return 0;
}