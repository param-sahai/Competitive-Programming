#include<iostream>
using namespace std;

struct Queue{
int front;
int rear;
int *arr;
int size;
};
int isFull(Queue *q){
    if(q->rear == ((q->size)-1))
    return 1;
    else return 0;
}
int isEmpty(Queue *q){
    if((q->front == q->rear)||q->rear==-1)
    return 1;
    else return 0;
}
void Enque(Queue *q, int e){
    if(isFull(q))
    cout<<"Queue is Full"<<endl;
    else{
        q->rear++;
        q->arr[q->rear]=e;
        // cout<<"Element "<<e<<" successfully added!"<<endl;
    }
}
int Deque(Queue *q){
    if(isEmpty(q)){
    // cout<<"The Queue is Empty!"<<endl;
    return -1;
    }
    else{
        q->front++;
        return q->arr[q->front];
        }            
}

Queue *q=new Queue();

int main(){
q->front=-1;
q->rear=-1;
q->size=7;
q->arr=new int(q->size);

int isVisited[7]={0,0,0,0,0,0,0};

int g[7][7]= {
    //   0 1 2 3 4 5 6
        {0,1,0,1,0,0,0},          //0
        {1,0,1,1,1,0,1},          //1 
        {0,1,0,0,1,0,0},          //2           
        {1,1,0,0,1,1,0},          //3
        {0,1,1,1,0,1,0},          //4
        {0,0,0,1,1,0,1},          //5           
        {0,1,0,0,0,1,0}           //6
};
Enque(q,0);
isVisited[0]=1;
int dq=0;
dq=Deque(q);
cout<<dq<<" ";
int val = 0; //element in the graph;
while(dq!=-1){
    for(int j=0;j<=6;j++){
        val=g[dq][j];
        if(val==1 && isVisited[j]==0){
            Enque(q,j);
            isVisited[j]=1;
        }
    }
    dq=Deque(q);
    if(dq!=-1)
    { 
        cout<<dq<<" ";
    }
}

return 0;
}