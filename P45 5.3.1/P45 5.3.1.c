#include<stdio.h>//��ǰn����ܺͣ�n=6 ��1+2/1+3/1+4/1+5/1+6/1
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
		sign = -sign;           //ÿ����һ�֣���sign=�����෴��
	}
	printf("%d��ǰn���ܺ�Ϊ%lf", n, num);
	return 0;
}