#include<iostream>
#include<string>
using namespace std;
struct node
{
	int num;
	string name;
	node* next;
	node()
	{
		cout << "enter the number" << endl;
		cin >> num;
		cout << "enter the name " << endl;
		cin >> name;
		next = 0;
	}
};
void enqueue();
void dequeue();
void display();

node* front;
node* rear;
void enqueue()
{
	node* ptr = new node();
	if (rear == 0)
	{
		rear = front = ptr;
	}
	else
	{
		rear->next = ptr;
		rear = ptr;
	}

}
void dequeue()
{
	node* temp = front;
	if (front == 0)
	{
		cout << "under flow" << endl;
	}
	else
	{
		front = temp->next;

		delete temp;
	}

}
void display()
{
	if (rear == 0)
	{
		cout << "queue is empty" << endl;
	}
	else
	{
		node* temp = front;
		while (temp->next != NULL)
		{
			cout << temp->num << endl;
			cout << temp->name << endl;
			temp = temp->next;
		}
	}

}
void main()
{
	enqueue();
	enqueue();
	enqueue();
	display();
	dequeue();
	display();
}



