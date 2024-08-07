/*
	求 1+1/2+1/3+…1/100之和
*/

#include<stdio.h>

int main(void)
{

	int i;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + 1.0 / i;  //是OK的 推荐使用
		//sum = sum +(float)(1/i);这样写是不对的
		//另一种写法:sum=sum+1/(float)(i); 不推荐
	}
	printf("sum = %f\n", sum);//float必须用%f输出
	return 0;
}
/*
	输出结果为：
	---------------------
	sum = 5.187378
	---------------------
*/