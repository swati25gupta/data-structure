#include<iostream> 
#include<string>
using namespace std;
struct  node
{
	int num;
	string name;
	node *next;
	

	node()
	{
		cout << "enter the number  " << endl;
		cin >> num;
		cout << "enter the name " << endl;
		cin >> name;
		next = 0;
		

	}
};
node *first;
node *pre;
void addatbeg();
void adddisp();
void addend();
void addmid();

void addatbeg()
{
	
	node *ptr = new node();
	if (first == 0)
	{
		first = ptr;
		pre = ptr;		
		ptr->next = first;
	}
	else
	{
		ptr->next = first;
		pre->next = ptr;
		first = ptr;		
	}
	}
void addend()
{
	node *ptr = new node();
	if (first == 0)
	{
		ptr->next = first;
	}
	else
	{
		node *temp = first;
		while (temp->next != first)
		{
			temp = temp->next;
		}
		ptr->next =first;
		temp->next = ptr;
	}
}

void addmid()
{
	node *ptr = new node();
	int n = 1, pos;
	cout << "enter the position " << endl;
	cin >> pos;
	if (first == 0)
	{
		ptr->next = first;
	}
	else
	{

		if (n > pos)
		{
			cout << "invalid  " << endl;
		}
		else
		{
			node *temp = first;
			node *prev = first;
			while (temp->next != first && n < pos-1)
			{ 
				prev = temp;
				temp = temp->next;
				n++;
			}
			ptr->next = temp->next;
			temp->next = ptr;

		}
	}
	
}
	
void adddisp()
{
	node *temp=first;
	//node *prev=first;
	while (temp->next!=first)
	{
		cout << "number is " << temp->num << endl;
		cout << "name is " << temp->name<< endl;
		temp = temp->next;
		//temp = prev;
	}
	cout << "number is " << temp->num << endl;
	cout << "name is " << temp->name << endl;
}
int main()
{
	addatbeg();
	addatbeg();
	addatbeg();
	adddisp();
	addend();
	addend();
	adddisp();
	cout << " adding in mid " << endl;
	addmid();
	adddisp();
	/*addatbeg();
	addatbeg();
	addatbeg();
	adddisp();*/
}
