#include<iostream>
#include<cstdlib>
using namespace std;
int fact(int);
int main()
{
	int n,fac;
	cout << "enter number";
	cin >> n;
	fac = fact(n);
	cout << fac;
	system("pause");
}
int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return(n*fact(n - 1));
}