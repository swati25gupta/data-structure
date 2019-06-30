#include<iostream>
using namespace std;
struct node
{
	int num;
	node* next;
	node()
	{
		cout << "enter the number" << endl;
		cin >> num;
		next = 0;
	}

};
void addatbeg();
void addatend();
void addatmid();
void display();


