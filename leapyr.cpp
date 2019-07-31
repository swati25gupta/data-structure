#include<iostream>
using namespace std;
void main()
{
	int yr1, yr2, temp = 0;
	cout << "enter the first year" << endl;
	cin >> yr1;
	cout << "enter the second yr" << endl;
	cin >> yr2;
	for (int i = yr1; i <= yr2; i++)
	{
		if (i % 4 == 0 || i%400 ==0 && i%100!=0)
		{
			cout << "\n Leap Year= " << i << endl;

		}

	}
}



