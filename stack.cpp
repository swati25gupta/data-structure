#include<iostream>
using namespace std;
struct node
{
	int num;
	char  name[10];
	node *next;
	node()
	{
		cout << "enter the number " << endl;
		cin >> num;
		cout << "enter the name " << endl;
		cin >> name;
		next = 0;

	}
};
node *top;
void push();
void pop();
void disp();
void push()
{
	node *ptr = new node();
	if (top == 0)
	{
		ptr->next = 0;
		top = ptr;
	}
	else {
		ptr->next = top;
		top = ptr;
	}
}
void pop()
{
	if (top==0)
	{
		cout << " stack is empty" << endl;
	}
	else {
		node *temp = top;
		top = temp->next;
		free(temp);
	}
}
void disp()
{
	if (top == 0)
	{
		cout<<" stack is empty";
		cout << endl;
	}
	else
	{
		node *temp = top;
		while (temp)
		{
			cout << temp->num << endl;
			cout << temp->name << endl;
			temp = temp->next;
		}
	}
}
int main()
{
	for (int i = 0; i <= 3; i++)
	{
		push();
	}
	disp();
	cout << " pop operation" << endl;
	pop();
	disp();
}