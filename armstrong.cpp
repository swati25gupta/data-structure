#include<iostream>
#include<math.h>
using namespace std;
void main()
{

	int num, count = 0, r, sum = 0, temp, copy;

	cout << "enter the number" << endl;
	cin >> num;
	temp = num;
	copy = temp;
	while (copy != 0)
	{
		copy = copy / 10;
		count++;
	}
	cout << "No of digits is " <<count<< endl;
	while (num > 0)
	{
		r = num % 10;
		sum = sum + pow(r, count);
		num = num / 10;


	}
	if (temp == sum)
	{
		cout << "no is armstrong" << endl;
	}
	else
		cout << "no is not armstrong" << endl;
	system("pause");
}