#include<iostream>
using namespace std;
void main()
{
	int num,a[5],b[5];
	int temp;
	cout << "enter the number" << endl;
	cin >> num;
	temp = num;
	if (num % 2 == 0)
	{
		for (int i = 0; i < 5; i++)
		{
			a[i] = num;
			b[i] = num + 1;
			// cout << "even number is" << num << endl;
			num = num + 2;

		}
		/*for (int i = 0; i < 5; i++)
		{
			cout << " odd number is" << temp + 1 << endl;
			temp = temp + 2;
			//cout << temp;
		}*/
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			a[i] = num;
			b[i] = num + 1;
			//cout << "even number is" << num+1 << endl;
			num = num + 2;

		}
		/*for (int i = 1; i <= 5; i++)
		{
			cout << " odd number is" << temp  << endl;
			temp = temp + 2;
			//cout << temp;
		}*/
	}
	
	//cout << num << "  " << temp << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " " << b[i] << " ";
	}


}




