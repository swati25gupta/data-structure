#include<iostream>
//#include<string>
using namespace std;
struct Node
{
	int num;
	Node* next;
	Node(int x) :num(x)
	{
		//cout << "enter the number" << endl;
		cin >> num;
		next = 0;
	}
	void addatbeg();
	void display();
};
Node* first;

void addatbeg(int x) {
	Node* New = new Node(x);
	if (first == 0) {
		first = New;
	}
	else {
		first->next = New;
		first = New;
	}
	New->next = first;
}


void display() {
}

int main() {
	addatbeg(1);
	addatbeg(2);
	addatbeg(3);
	addatbeg(4);
	display();
	return 0;
}
