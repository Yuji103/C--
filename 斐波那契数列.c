/*
	��쳲��������е�������ֵ
*/

#include<stdio.h>

int main(void)
{
	int i, n;
	int f1, f2, f3;

	f1 = 0;
	f2 = 1;

	printf("������Ҫ�����쳲��������е�������");
	scanf("%d", &n);

	if (n < 1)
	{
		printf("����������������1��������\n");
		return 0;
	}
	printf("쳲��������У�");
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