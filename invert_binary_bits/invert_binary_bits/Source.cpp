#include <iostream>
#include <cstdlib>
using namespace std;
void invertponwards(int, int, int);

int main()
{
	int n, p ,b;
	cin >> n;
	cin >> p;
	cin >> b;
	invertponwards(n, p, b);
	getchar();
}
void invertponwards(int num,int pos,int bit)
	{
	int  a[8] = { 0 }, i = 0;
	while (num > 0)
	{
		a[i] = num % 2;
		i++;
		num = num / 2;
	}
	for (i = pos; i <= bit + i; i++)
	{
		if (a[i] == 1)
			a[i] = 0;
		else
			a[i] = 1;
	}
	for (i = 7; i >= 0; i--)
		cout << a[i];
	getchar();
}