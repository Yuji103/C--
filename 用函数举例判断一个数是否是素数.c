/*
	用函数举例判断一个数是否是素数
*/

#include<stdio.h>

_Bool IsPrime(int val)
{
	int i;
	for (i = 2; i  < val; i++)
	{
		if (val%i==0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int m;
	printf("请输入一个数：");
	scanf("%d", &m);
	if (IsPrime(m))
		printf("Yes!\n");
	else
		printf("No!\n");
	return 0;
}
