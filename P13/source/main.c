#include <stdio.h>
#include <stdlib.h>

double p(double, int);

void main(void)
{
	int k;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	ans = p(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
	system("pause");
}

double p(double x, int n)
{
	int i;
	double px = 1;
	for (i = 1; i <= n; i++)
	{
		px = px * x;
	}
	return px;
}