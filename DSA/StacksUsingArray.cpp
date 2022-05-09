#include<iostream>
using namespace std;

int top=-1;

int isEmpty(int *stack){
    if(top == -1)
    return 1;
    else
    return 0;
}

int isFull(int *Stack, int size){
    if(top == size-1)
    return 1;
    else
    return 0;
}

void Push(int *stack, int size, int e){
    if( isFull(stack,size) ){
        cout<<"Stack Overflow!!"<<endl;
        // return 0;
    }
    else{
        ++top;
        stack[top]=e;
        cout<<"Element "<<e<<" successfully pushed!"<<endl;
        // return 1;
    }
}

void Pop(int *stack, int size){
    if( isEmpty(stack) ){
        cout<<"Stack Underflow!!"<<endl;
        // return 0;
    }
    else{
        cout<<"Element "<<stack[top]<<" successfully deleted!"<<endl;
        --top;
        // return 1;
    }
}

void displayStack(int *stack, int size){
    if( isEmpty(stack) )
    cout<<"Stack is Empty!!"<<endl;
    else
    {
        cout<<"Stack elements are:"<<endl<<endl;

        for(int i=0;i<=top;i++)
        cout<<stack[i]<<"|";

        cout<<endl<<endl;
    }

}
int main(){
   int size=0;
   cout<<"Enter the size of the stack ";
   cin>>size;
   cout<<endl;
   int *stack=new int[size];

   cout<<"Enter number of elements to be Pushed into the stack ";
   int n=0;
   cin>>n;

   cout<<endl;

   cout<<"Enter "<<n<<" Elements"<<endl;

   int e;

   for(int i=0;i<n;i++)
   {
       cin>>e;
       Push(stack,size,e);
   }

//    Push(stack,size,12);
//    Push(stack,size,13);
//    Push(stack,size,14);
//    Push(stack,size,15);
//    Push(stack,size,16);
//    Push(stack,size,17);

   displayStack(stack,size);


   cout<<"Enter number of elements to be Deleted"<<endl;

   int d;
   cin>>d;

   for(int i=0;i<d;i++)
   {
       Pop(stack,size);
   }

//    Pop(stack,size);
//    Pop(stack,size);

   displayStack(stack,size);

return 0;
}