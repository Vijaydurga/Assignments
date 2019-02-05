#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n,f=1;
	cin >> n;
	getchar();
	while (n > 0)
	{
		f = f*n;
		n--;
	}
	cout << f;
	getchar();
}
