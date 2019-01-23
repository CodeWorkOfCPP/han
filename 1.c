#include<iostream>
using namespace std;
int main(void)
{
	cout << "ÇëÊäÈëÊý×Ö";
	int a[10], i, j, k;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	for (i = 1; i < 10; i++)
	{
		j = i - 1;
		while (a[j] > a[j + 1] && j >= 0)
		{
			k = a[j];
			a[j] = a[j + 1];
			a[j + 1] = k;
			j--;
		}

	}
	for (i = 0; i < 10; i++)
		cout << a[i];
}

