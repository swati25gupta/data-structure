#include<iostream>
using namespace std;
struct node
{
	int num;
	char name[10];
	node *prev;
	node *next;

	node(int x = 0)
	{
		cout << "enter the number  " << endl;
		cin >> num;
		cout << "enter the name  " << endl;
		cin >> name;

		prev = next= 0;
	}
	};
class doublelyll
{
	node *first;
	node *last;
public:
	doublelyll():first(0),last(0){}
	void addatbeg();
	void dispfwd();
	void disprev();
	void addend();
	void addatmid();
	void deletepos();
	//void dispfwd();
	//void disprev();

};
void doublelyll::addatbeg()
{
	node *ptr = new node();
	if (first == 0)
	{
		first = last = ptr;
	}
	else
	{
		first->prev = ptr;
		ptr->next = first;
		first = ptr;
	}

}
void doublelyll::addend()
{
	node *ptr1 = new node();
	if (first == 0)
	{
		first = last = ptr1;

	}
	else
	{
		ptr1->prev = last;
		last->next = ptr1;
		last = ptr1;
	}
} 
void doublelyll::addatmid()
{
	node *ptr2 = new node();
	int n = 1 , pos=2;
	
	if(first==0)
	{
		first =last= ptr2;
	}
	else
	{
		node *temp = first;
		node* pre = 0;
		while (temp->next != 0 && n<pos)
		{
			pre = temp;
			temp = temp->next;
			n++;
		}
		ptr2->prev = temp->next;
		temp->next = ptr2;
		ptr2->next = pre->prev;

	}
}
void  doublelyll::deletepos()
{
	int pos, n = 1;
	cout << " enter the position " << endl;
	cin >> pos;
	
	node *before = first;
	node *dele = first;

	
	if (first == 0)
	{
		first = dele;
	}
	
	else
	
		while (before->next != 0 && n < pos - 1)
		{
			before= dele;
			before = before->next;
			n++;

		}
		
		dele = before->next;
		before->next = dele->next;
		before->next->prev = before;
		delete dele;


	}

//}



void doublelyll::dispfwd()
{
	node *temp = first;
	while (temp)
	{
		cout << "number is " << temp->num << "  " << endl;
		cout << "name is  " <<temp->name << " " << endl;
		temp = temp->next;

	}
}
void doublelyll::disprev()
{
	node *temp=last;
	while (temp)
	{
		cout << " number is  " << temp->num << " " << endl;
		cout << "name is  " << temp->name << " " << endl;
		temp = temp->prev;
	}

}
int main()
{
	//int pos;
	doublelyll  one;
	for (int a = 0; a <3; a += 1)
	
		one.addatbeg();
	cout << endl;
	
	one.dispfwd();
	one.disprev();
	//for (int a = 0; a<10; a += 2)
	cout << endl;
		one.addend();
		one.addend();
		cout << endl;
		one.dispfwd();
		cout << endl;
		one.disprev();
		one.addatmid();
		cout << endl;
	
	one.dispfwd();
	cout << endl;
	one.disprev();
	cout << endl;

	one.deletepos();
	cout << endl;
	one.dispfwd();
	cout << endl;
	one.disprev();
	
}