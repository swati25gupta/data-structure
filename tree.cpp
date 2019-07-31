#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
	int height;
}Node;

Node *createNode(int);
Node *LLRotation(Node *);
Node *RRRotation(Node *);
Node *LRRotation(Node *);
Node *RLRotation(Node *);

Node *balance(Node *);
Node *insert(Node *, Node *);
void preOrder(Node *);

int Max(int i, int j) {
	return i > j ? i : j;
}

int height(Node *curr) {
	return curr == NULL ? -1 : (curr->height);
}


int main(void) {
	int arr[] = { 30,40,50,20,10,60,55,5,8,3 };
	Node *root = NULL;
	int cnt;
	for (cnt = 0; cnt < 10; cnt++)
		root = insert(root, createNode(arr[cnt]));

	printf("Pre-Order...:\t");
	preOrder(root);
	printf("\n");
	return 0;
}



Node *LLRotation(Node *curr) {
	Node *temp;
	printf("LL Rotation: \n");
	temp = curr->left;
	curr->left = temp->right;
	temp->right = curr;
	curr->height = Max(height(curr->left), height(curr->right)) + 1;
	temp->height = Max(height(temp->left), curr->height) + 1;
	return temp;
}

Node *RRRotation(Node *curr) {
	Node *temp;
	printf("RR Rotation: \n");
	temp = curr->right;
	curr->right = temp->left;
	temp->left = curr;
	curr->height = Max(height(curr->left), height(curr->right)) + 1;
	temp->height = Max(height(temp->right), curr->height) + 1;
	return temp;
}


Node *LRRotation(Node *curr) {
	printf("LR Rotation: \n");
	curr->left = RRRotation(curr->left);
	curr = LLRotation(curr);
	return curr;
}


Node *RLRotation(Node *curr) {
	printf("RL Rotation: \n");
	curr->right = LLRotation(curr->right);
	curr = RRRotation(curr);
	return curr;
}



Node *balance(Node *curr) {
	int bFactor, hL, hR;
	Node *pLeft, *pRight;

	if (curr->left == 0) {
		hL = 0;
	}
	else {
		hL = curr->left->height + 1;
	}
	if (curr->right == 0) {
		hR = 0;
	}
	else {
		hR = curr->right->height + 1;
	}
	bFactor = hL - hR;

	if (bFactor  < 2 && bFactor > -2) {
		return curr;

	}
	else if (bFactor == 2) {
		printf("Balancing...\t");
		pLeft = curr->left;

		if (height(pLeft->left) > height(pLeft->right))
			return LLRotation(curr);
		else
			return LRRotation(curr);
	}
	else {
		printf("Balancing...\t");
		pRight = curr->right;

		if (height(pRight->right) > height(pRight->left))
			return RRRotation(curr);
		else
			return RLRotation(curr);
	}
}

Node *insert(Node *root, Node *New) {

	if (root == 0) {
		printf("inserting %d\n", New->data);
		return New;
	}
	if (New->data > root->data) {

		root->right = insert(root->right, New);
		if (root->right == 0)
			root->right = New;
	}
	else {
		root->left = insert(root->left, New);
		if (root->left == 0)
			root->left = New;
	}
	root->height = Max(height(root->left), height(root->right)) + 1;

	root = balance(root);

	return root;
}

Node *createNode(int data) {
	Node *New = (Node *)malloc(sizeof(Node));
	New->data = data;
	New->left = NULL;
	New->right = NULL;
	New->height = 0;
	return New;
}

void preOrder(Node *root) {
	if (root) {
		printf("%d  ", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
