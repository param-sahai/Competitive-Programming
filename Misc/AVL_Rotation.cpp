// C++ program to insert a node in AVL tree
#include<bits/stdc++.h>
using namespace std;

// An AVL tree node
class Node
{
	public:
	int data;
	Node *left;
	Node *right;
	int height;
};

// A utility function to get maximum
// of two integers
int max(int a, int b);

// A utility function to get the
// height of the tree
int height(Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

// A utility function to get maximum
// of two integers
int max(int a, int b)
{
	return (a > b)? a : b;
}

/* Helper function that allocates a
new node with the given data and
NULL left and right pointers. */
Node* newNode(int data)
{
	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->height = 1; // new node is initially
					// added at leaf
	return(node);
}

// A utility function to right
// rotate subtree rooted with y
// See the diagram given above.
Node *rightRotate(Node *y)
{
	Node *x = y->left;
	Node *T2 = x->right;

	// Perform rotation
	x->right = y;
	y->left = T2;

	// Update heights
	y->height = max(height(y->left),
					height(y->right)) + 1;
	x->height = max(height(x->left),
					height(x->right)) + 1;

	// Return new root
	return x;
}

// A utility function to left
// rotate subtree rooted with x
// See the diagram given above.
Node *leftRotate(Node *x)
{
	Node *y = x->right;
	Node *T2 = y->left;

	// Perform rotation
	y->left = x;
	x->right = T2;

	// Update heights
	x->height = max(height(x->left),
					height(x->right)) + 1;
	y->height = max(height(y->left),
					height(y->right)) + 1;

	// Return new root
	return y;
}

// Get Balance factor of node N
int getBalance(Node *N)
{
	if (N == NULL)
		return 0;
	return (height(N->right) - height(N->left));
}

// Recursive function to insert a data
// in the subtree rooted with node and
// returns the new root of the subtree.
Node* insert(Node* node, int data)
{
	/* 1. Perform the normal BST insertion */
	if (node == NULL)
		return(newNode(data));

	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);
	else // Equal datas are not allowed in BST
		return node;

	/* 2. Update height of this ancestor node */
	node->height = 1 + max(height(node->left),
						height(node->right));

	/* 3. Get the balance factor of this ancestor
		node to check whether this node became
		unbalanced */
	int balance = getBalance(node);

	// If this node becomes unbalanced, then
	// there are 4 cases

	// Left Left Case
	if (balance <-1 && data < node->left->data)
		return rightRotate(node);

	// Right Right Case
	if (balance > 1 && data > node->right->data)
		return leftRotate(node);

	// Left Right Case
	if (balance < -1 && data > node->left->data)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	// Right Left Case
	if (balance > 1 && data < node->right->data)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	/* return the (unchanged) node pointer */
	return node;
}

// A utility function to print preorder
// traversal of the tree.
// The function also prints height
// of every node
void preOrder(Node *root)
{
	if(root != NULL)
	{
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

// Driver Code
int main()
{
	Node *root = NULL;
	
	/* Constructing tree given in
	the above figure */
	root = insert(root,14);
    root = insert(root,17);
    root = insert(root,11);
    root = insert(root,7);
    root = insert(root,53);
    root = insert(root,4);
    root = insert(root,13);
    root = insert(root,12);
    root = insert(root,8);
    root = insert(root,60);
    root = insert(root,19);
    root = insert(root,16);
    root = insert(root,20);
    
	cout << "Preorder traversal of the "
			"constructed AVL tree is \n";
	preOrder(root);
	
	return 0;
}

// This code is contributed by
// rathbhupendra
