/*
	输入一元二次方程的3个系数，得出解
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	double a, b, c;
	double delta;
	double x1, x2;
	char ch;
	do
	{
		printf("请输入一元二次方程的三个系数：\n");
		printf("a = ");
		scanf("%lf", &a);

		printf("b = ");
		scanf("%lf", &b);

		printf("c = ");
		scanf("%lf", &c);

		delta = b * b - 4 * a * c;

		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("有两个解，x1=%lf,x2=%lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("有唯一的解，x1 = x2 = %lf\n", x1, x2);
		}
		else
		{
			printf("无实数解！\n");
		}
		printf("您想继续吗（Y/任意输入）：");
		scanf(" %c", &ch);//%c前面必须加一个空格
	} while ('Y' == ch || 'y' == ch);

		return 0;
}
