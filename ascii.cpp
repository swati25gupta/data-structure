#include<iostream>
using namespace std;
void main()
{
	char arr[] = "chhavi";
	int res, sum = 0;
	for (int i = 0;arr[i]; i+=2)
	{
		res = 100*arr[i]+arr[i+1];
		cout << res <<  "+" ;
		sum += res;
	}
	cout << "/n result=   " << sum << endl;
}