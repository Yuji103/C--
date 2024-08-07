/*
	完成两个数字互换
*/

#include<stdio.h>

int main(void)
{

	int i = 3;
	int j = 5;
	int t;//定义临时变量

	//以下两行代码无法完成i和j的互换
	//i=j;             //i=5;j=5;
	//j=i;             //i=5;j=5;

	t = i;
	i = j;
	j = t;
	printf("i=%d,j=%d\n", i, j);
	return 0;
}
/*
	输出结果为：
	---------------------
	i=5,j=3
	---------------------
*/