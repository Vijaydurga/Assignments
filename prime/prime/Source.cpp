#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int m, n, i = 0, j = 0,c=0;
	cin >> m ;
	cin >> n ;
	getchar();
	for (i = m; i <= n; i++)
	{
		c = 0;
		for (j = 1; j <= i; j++)
		{
			if (i%j == 0)
				c++;
		}
		if (c == 2)
			cout << "  " << i;

	}
	getchar();

}