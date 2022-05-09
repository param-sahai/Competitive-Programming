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
    if(q->rear==-1)
    return 1;
    else return 0;
}
void Enque(Queue *q, int e){
    if(isFull(q))
    cout<<"Queue is Full"<<endl;
    else{
        q->rear++;
        q->arr[q->rear]=e;
        cout<<"Element "<<e<<" successfully added!"<<endl;
    }
}
void Deque(Queue *q){
    if(isEmpty(q))
    cout<<"The Queue is Empty!"<<endl;
    else{
        q->front++;
        if(q->front==q->rear){
            q->front=q->rear=-1;
            cout<<"The Queue is Empty!"<<endl;
        }
        else{
        cout<<"Element "<<q->arr[q->front]<<" successfully deleted!"<<endl;
        }            
    }
}
int firstVal(Queue *q){
    if(isEmpty(q))
    return -1;
    else return q->arr[q->front+1];
}
int lastVal(Queue *q){
    if(isEmpty(q))
    return -1;
    else return q->arr[q->rear];
}
void peek(Queue *q, int pos){
  if(q->front==q->rear==-1) {
         cout<<"Queue is empty"<<endl;
      } 
  else {
        int count=0;
         for(int i=q->front+1;i<=q->rear;i++) {
            count++;
            if(count==pos){
            cout<<"The element at position "<<pos<<" is: "<<q->arr[i]<<endl;
            break;
            }
         }
         cout<<endl;
      }   
}
void displayQueue(Queue *q){
  if(q->front==q->rear==-1) {
         cout<<"Queue is empty"<<endl;
      } 
  else {
         for(int i=q->front+1;i<=q->rear;i++) {
            cout<<q->arr[i]<<" ";
         }
         cout<<endl;
      }   
}
Queue *q=new Queue();

int main(){
q->front=-1;
q->rear=-1;
q->size=5;
q->arr=new int(q->size);
Enque(q,1);
Enque(q,2);
Enque(q,3);
Enque(q,4);
Enque(q,5);
cout<<"First element is: "<<firstVal(q)<<endl;
cout<<"Last element is: "<<lastVal(q)<<endl;
displayQueue(q);
Deque(q);
Deque(q);
displayQueue(q);
cout<<"First element is: "<<firstVal(q)<<endl;
cout<<"Last element is: "<<lastVal(q)<<endl;
peek(q,2);
return 0;
}