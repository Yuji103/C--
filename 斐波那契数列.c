/*
	求斐波那契数列的项数的值
*/

#include<stdio.h>

int main(void)
{
	int i, n;
	int f1, f2, f3;

	f1 = 0;
	f2 = 1;

	printf("请输入要计算的斐波那契数列的项数：");
	scanf("%d", &n);

	if (n < 1)
	{
		printf("输入错误，请输入大于1的整数。\n");
		return 0;
	}
	printf("斐波那契数列：");
	for (i = 0; i <= n; ++i)
	{
		if (i <= 1)
			f3 = i;
		else
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("%d\n", f3);
		
	return 0;
}