#include<iostream>
using namespace std;

struct CQueue{
int front;
int rear;
int *arr;
int size;
};
int isFull(CQueue *q){
    if( ((q->rear+1)%(q->size)) == (q->front) )
    return 1;
    else return 0;
}
int isEmpty(CQueue *q){
    if(q->rear==q->front)
    return 1;
    else return 0;
}
void Enque(CQueue *q, int e){
    if(isFull(q))
    cout<<"CQueue is Full"<<endl;
    else{
        q->rear=(q->rear+1)%(q->size);
        q->arr[q->rear]=e;
        cout<<"Element "<<e<<" successfully added!"<<endl;
    }
}
void Deque(CQueue *q){
    if(isEmpty(q))
    cout<<"The CQueue is Empty!"<<endl;
    else{
        q->front=(q->front+1)%(q->size);
        cout<<"Element "<<q->arr[q->front]<<" successfully deleted!"<<endl;
        }            
}
int firstVal(CQueue *q){
    if(isEmpty(q))
    return -1;
    else return q->arr[(q->front+1)%(q->size)];
}
int lastVal(CQueue *q){
    if(isEmpty(q))
    return -1;
    else return q->arr[q->rear];
}
// void peek(CQueue *q, int pos){
//   if(q->front==q->rear==-1) {
//          cout<<"CQueue is empty"<<endl;
//       } 
//   else {
//         int count=0;
//          for(int i=q->front+1;i<=q->rear;i++) {
//             count++;
//             if(count==pos){
//             cout<<"The element at position "<<pos<<" is: "<<q->arr[i]<<endl;
//             break;
//             }
//          }
//          cout<<endl;
//       }   
// }
void displayCQueue(CQueue *q){
  if(isEmpty(q){
         cout<<"CQueue is empty"<<endl;
      } 
  else {
         for(int i=(q->front+1)%(q->size);i!=q->rear;i=(i+1)%(q->size)) {
            cout<<q->arr[i]<<" ";
         }
         cout<<endl;  
        }
CQueue *q=new CQueue();

int main(){
q->front=6;
q->rear=6;
q->size=7;
q->arr=new int(q->size);
Enque(q,1);
Enque(q,2);
Enque(q,3);
Enque(q,4);
Enque(q,5);
cout<<"First element is: "<<firstVal(q)<<endl;
cout<<"Last element is: "<<lastVal(q)<<endl;
displayCQueue(q);
Deque(q);
Deque(q);
displayCQueue(q);
cout<<"First element is: "<<firstVal(q)<<endl;
cout<<"Last element is: "<<lastVal(q)<<endl;
// peek(q,2);
return 0;
}