#include<iostream>
using namespace std;

int main()
{
	char a[100];
	int digits;
	int sum = 0;
	while (cin >> a)
	{
		for (int i = 0; i < 100; i++)
		{
			if (a[i] == '#')
				digits = i;
		}
		for (int j = 0; j < digits; j++)
		{
			sum *= 2;
			sum += a[j] - '0';
		}
		if (sum % 131071 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}