
#include<stdio.h>
int main()
{
	double count = 0.0;
	double n = 100.0;
	int i = 0;
	scanf_s("%d", &i);//代表第几次落地
	double h = 0.5;
	int p = 1;
	for (p = 1; p <= i; p++)//第i次落地后能反弹能反弹多少米；
	{
		n = h * n;
		
	}
	double q = 100.0;
	int s = 0;
	for (s = 1; s < i; s++)
	{
		q = q * h;
		count = count + q * 2.0;

	}
	count = count + 100.0;
		if (i == 1)
	{
		printf("第一次落地运动了100米\n");
		printf("能反弹50米");
	}
	else
	{
		
		printf("第%d次落地运动了：%lf米\n", i, count);
		printf("第%d次落地后能反弹%lf米\n", i, n);
	}
	return 0;
}