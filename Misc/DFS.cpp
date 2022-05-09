#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* link;
};

struct Node* top;

void push(int data)
{
	
	// Create new node temp and allocate memory
	struct Node* temp;
	temp = new Node();

	if (!temp)
	{
		cout << "\nHeap Overflow";
		exit(1);
	}

	// Initialize data into temp data field
	temp->data = data;

	// Put top pointer reference into temp link
	temp->link = top;

	// Make temp as top of Stack
	top = temp;
}

int isEmpty()
{
	return top == NULL;
}

int pop()
{
	struct Node* temp;

	// Check for stack underflow
	if (top == NULL)
	{
		return -1;
	}
	else
	{
		
		// Top assign into temp
		temp = top;
        int pe=top->data;
		// Assign second node to top
		top = top->link;

		// Destroy connection between
		// first and second
		temp->link = NULL;

		// Release memory of top node
		return pe;
	}
}


int main(){

int isVisited[8]={0,0,0,0,0,0,0,0};

int g[8][8]= {
    //   0 1 2 3 4 5 6 7
        {0,0,1,0,1,0,0,0},          //0
        {0,0,1,1,0,0,1,0},          //1
        {1,1,0,0,1,0,0,0},          //2
        {0,1,0,0,0,0,0,0},          //3
        {1,0,1,0,0,0,0,0},          //4
        {0,0,0,0,0,0,0,1},          //5
        {0,1,0,0,0,0,0,1},          //6
        {0,0,0,0,0,1,1,0}           //7
};
push(0);
isVisited[0]=1;
int pe=0;
int val = 0; //element in the graph;
while(pe!=-1){
    for(int j=0;j<=7;j++){
        val=g[pe][j];
        if(val==1 && isVisited[j]==0){
            push(j);
            isVisited[j]=1;
            pe=j;
            j=0;
        }
    }
    pe=pop();
    if(pe!=-1)
    { 
        cout<<pe<<" ";
    }
}

return 0;
}