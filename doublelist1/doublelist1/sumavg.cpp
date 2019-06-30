#include<iostream>
using namespace std;

void func()
{
	int a, b, c, d,e;
	cout << "enter the numbers" << endl;
	cin >> a >> b >> c >> d;
	c = a + b + c + d;
	cout << "sum is " << endl;
	cin >> c;
	e = (a + b + c + d) / 4;
	cout << "avg is " << endl;
	cin >> e;


} 
void main()
{
	func();
}
