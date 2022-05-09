#include<iostream>

using namespace std;
struct Graph{
    int v;
    int e;
    int Matrix[1000][1000];
};

void AddNodes(Graph *g,int x,int y){

}
int main(){
    int x,y;
    Graph *g=new Graph();
    cout<<"Enter no. of vertices in the Graph: ";
    cin>>g->v;
    cout<<"Enter no. of edges in the Graph: ";
    cin>>g->e;
    cout<<"Enter "<<g->e<<" linked nodes"<<endl;
    for(int i=1;i<=g->e;i++)
    {
        cin>>x>>y;
        AddNodes(g,x,y);
    }
return 0;
}