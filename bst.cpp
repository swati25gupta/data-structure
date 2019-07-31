#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
	Node(int x = 0) :data(x) {
		left = right = 0;
	}
};

Node *root;
void insert(int);
void preOrder(Node*);
void inOrder(Node*);
void postOrder(Node*);

int main() {
	int arr[] = { 30,15,50,10,8,13,18,17,80,40,45,28 };
	for (int cnt = 0; cnt < 12; cnt++)
		insert(arr[cnt]);
	cout << "Pre Order: ";
	preOrder(root);
	cout << "\nIn Order: ";
	inOrder(root);
	cout << "\nPost Order: ";
	postOrder(root);
	cout << endl;
}

void insert(int x) {
	Node *New = new Node(x);
	Node *curr = root, *prev = 0;
	while (curr) {
		prev = curr;
		if (x < curr->data)
			curr = curr->left;
		else
			curr = curr->right;
	}
	if (prev == 0)
		root = New;
	else if (x < prev->data)
		prev->left = New;
	else
		prev->right = New;
}



void preOrder(Node*  root) {
	if (root) {
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}
void inOrder(Node*  root) {
	if (root) {
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}
}
void postOrder(Node*  root) {
	if (root) {
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
}











