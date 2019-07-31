#include<iostream>
#include<string>
using namespace std;
struct node {
	int num;
	string name;
	node *next;

};
void main()
{
	node *ptr;
	ptr = new node();
	ptr -> num =10;
	ptr -> name = "dinesh";
	ptr->next = ptr;
	cout << ptr->next->next->next->next->num << endl;
	cout << ptr->next->next->next->next->name<< endl;
	cout <<ptr->next->next->next->next<< endl;

}