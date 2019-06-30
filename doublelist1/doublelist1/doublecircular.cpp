#include<iostream>
#include<string>
using namespace std;
struct node
{
	int num;
	string name;
	node *next,*prev;
	node()
	{
		cout << "enter the number " << endl;
		cin >> num;
		cout << "enter the name " << endl;
		cin >> name;
		next = 0;
		prev = 0;
	}
	
};
node *first,*last;

void addatbeg();
void dispfwd();
void disprev();
void addend();
void addmid();
void deletebeg();
void deleteend();
void addatbeg()
{
	node *prev = 0;
	node *ptr = new node();
	if (first == 0)
	{
		first = last = ptr;
		ptr->next = first;
		ptr->prev= first;

	}
	else
	{
		ptr->prev = first->prev; 
		ptr->next = first;
		last->next = ptr;
		first->prev = ptr;
		first = ptr;
	}
}

void addend()
{
	node *prev = 0;
	node *ptr = new node();
	if (first == 0)
	{
		first = last = ptr;
		ptr->next = first;
		ptr->prev = first;

	}
	else
	{
	
		ptr->prev = last;
		ptr->next = last->next;
		
		last->next = ptr;
		first->prev = ptr;
		last = ptr;
	}
}
void addmid()
{
	int count = 1, pos;
	node *ptr = new node();
	cout << "enter the position " << endl;
	cin >> pos;
	if (first == 0)
	{
		first = last = ptr;
	}
	else
	{
		node *temp = first;
			node *prev=first;
		while (temp->next!= first && count< pos-1)
		{
			prev = temp;
			temp = temp->next;
			count++;
		}
		ptr->prev = temp;
		ptr->next = temp->next;
		temp->next->prev = ptr;
		temp->next = ptr;

	}

}

void deletebeg()
{
	node *temp = first;
	cout << "delete process" << endl;
	if (first == 0)
	{
		cout << " is empty" << endl;
	}
	else
	{
		temp->next->prev = last;
		first = temp->next;
		last->next = first;
		delete temp;
	}
}
void deleteend()
{
	node *temp = last;
	if (first == 0)
	{
		cout << " is empty" << endl;
	}
	else
	{
		temp->prev->next = first;
		first->prev = temp->prev;
		delete temp;
	}

	
}

void  dispfwd()
{
	node *temp = first;
	while (temp->next != first)
	{
		cout << "number is  " << temp->num << endl;
		cout << "name is  " << temp->name << endl;
		temp = temp->next;

	}
	cout << "number is  " << temp->num << endl;
	cout << "name is  " << temp->name << endl;
}
void  disprev()
{
	node *temp = last;
	while (temp->prev!=last)
	{
		cout << "number is  " << temp->num << endl;
		cout << "name is  " << temp->name << endl;
		temp = temp->prev;

	}
	cout << "number is  " << temp->num << endl;
	cout << "name is  " << temp->name << endl;
}
void main()
{
	for (int i = 0; i < 4; i++)
	{
		addatbeg();
	}
	dispfwd();
	cout << " " << endl;
	disprev();

	addend();
	addend();
	dispfwd();
	cout << " " << endl;
	disprev();

	addmid();
	dispfwd();
	cout << " " << endl;
	disprev();
	cout << "position" << endl;
	deletebeg();
	dispfwd();
	cout << " " << endl;
	disprev();

	/*deleteend();
	dispfwd();
	cout << " " << endl;
	disprev();
*/

}