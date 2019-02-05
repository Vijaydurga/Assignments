#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	int n, r = 0, i = 0, a[8] = { 0 }, sum = 0, m = 7;
	cin >> n;
	getchar();
	while (n >0)
	{
		r = n % 2;
		a[m] = r;
		sum = sum +r* pow(2,i);
		n = n / 2;
		i++;
		m--;
	}
	for (i = 0; i < 8; i++)
		cout << a[i];
	cout << endl;
	cout << sum;

	getchar();
}