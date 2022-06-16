#include <iostream>
#include <math.h>
using namespace std;

bool checksnt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

int sum(int n)
{
	int S = 0;
	while (n > 0)
	{
		S += n % 10;
		n /= 10;
	}
	return S;
}

bool checkkhongtang(int n)
{
	int a[8], c = 8;
	while (n > 0)
	{
		a[c] = n % 10;
		n /= 10;
		c--;
	}
	for (int i = 1; i <= 7; i++)
		for (int j = i + 1; j <= 8; j++)
			if (a[i] < a[j]) return false;
	return true;
}

int main()
{
	for (int i = 10000000; i <= 99999999; i++)
	{
		if (checksnt(i) && checksnt(sum(i)) && checksnt(checkkhongtang(i))) cout << i << " ";
	}
	return 0;
}