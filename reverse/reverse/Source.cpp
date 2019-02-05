#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n, r = 0, n1 = 0;
	cin >> n;
	getchar();
	while (n > 0)
	{
		r = n % 10;
		n1 = n1*10 + r;
		n = n / 10;
	}
	cout << n1;
	getchar();
}