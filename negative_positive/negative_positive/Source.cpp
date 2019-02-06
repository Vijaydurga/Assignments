#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a[10] = { 0 }, i = 0, j=0,t=0;
	while (i<10) {
		cin >> a[i];
		getchar();
		i++;
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j] > 0 && a[j+1] < 0)
			{
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
				
			}
		}
	}
	for(i=0;i<10;i++)
	cout << " " << a[i];
	getchar();

}