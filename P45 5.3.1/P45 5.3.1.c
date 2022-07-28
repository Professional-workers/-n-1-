#include<stdio.h>//求前n项的总和，n=6 ；1+2/1+3/1+4/1+5/1+6/1
int main()
{
	int n;
	int i;
	double num = 0.0;
	int sign = 1;
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		num +=sign*1.0 / i;       
		sign = -sign;           //每走完一轮，让sign=它的相反数
	}
	printf("%d的前n项总和为%lf", n, num);
	return 0;
}