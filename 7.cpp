#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int n,i,j,m=0,suan;
	long double k=0;
	cin >> n;
	long double *amount = new long double[n];
	srand(time(NULL));
	for (suan = 1; suan <= 20000; suan++)
	{
		for (i = 0; i < n; i++)
		{
			amount[i] = rand() % (365 - 1 + 1) + 1;
		}
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (amount[i] == amount[j])
				{
					m = 1;
					goto lable;
				}
			}
		}
	lable:
		if (m == 1)
		{
			k = k + 1;
			m = 0;
		}
	}
	cout << 1 - k / 20000;
	getchar();
	getchar();
}