#include<iostream>
using namespace std;
struct node
{
	int num;
	char name[35];
	node* next;
	node()
	{
		cout << "name and number is" << endl;
		cin >> num;
		cin >> name;
		next = 0;

	}
};
node* first;
void addatbeg();
void addatmid();
void deletepos(int);
void display();

void addatbeg()
{
	//node *first;
	node *ptr = new node();
	if (first == 0)
	{
		first = ptr;
	}
	else

		ptr->next = first;
	first = ptr;
}
void addatmid()
{
	//node* first;
	node* ptr1 = new node();
	if (first == 0)
		first = ptr1;
	else
	{
		node* temp = first;
		int pos=3;
		int count = 1;
		while (temp->next != 0 && count < pos - 1)
		{
			
			temp = temp->next;
			count++;
		}
		ptr1->next = temp->next;
		temp->next = ptr1;
	}
	}
void deletepos(int pos)
{
	node *prev=first;
	node *temp=first;
	int count = 0;
	if (first == 0)
	{
		cout << "list is empty " << endl;
	}
	else
	{
		while (temp != 0 && count < pos - 1)
		{
			prev = temp;
			temp = temp->next;
			count++;

		}
		prev->next = temp->next;
		delete(temp);
	}
}
	void display()
	{
		//node* first;
		node* temp = first;
		while (temp)
		{
			cout << "num is " << temp->num << endl;
			cout << "name is" << temp->name << endl;
			temp = temp->next;
		}
}
	/*void deletebeg()
	{
		
		node *a=first;
		if (first == 0)
		{
			cout << "is empty";
		}
		else
		{
			first = a->next;
			delete a;
		}

	}
	void deleteatend()
	{*/
		//node* d = 0;
		/*node*j = 0;
		d = first;
		while (d = d->next)
		{
			j = d;
			d = d->next;

		}
		j -> next = NULL;
		delete d;

	}
	void deleteatpos()
	{
		int n;
			int count;
		node *d;
		node*j = 0;
		d = first;
		while (d=d->next && count<n-1 )
		{
			j = d;*/
			/*d = d->next;

		}
		j->next = NULL;
		delete d;
	}*/

	void main()
	{
		addatbeg();
		addatbeg();
		addatbeg();
		addatbeg();
		display();
		addatmid();
		display();
		//int pos;
		cout << "enter the position " << endl;
		//cin >> pos;
		deletepos(3);
		display();
	}