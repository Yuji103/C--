/*
	�� 1+1/2+1/3+��1/100֮��
*/

#include<stdio.h>

int main(void)
{

	int i;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + 1.0 / i;  //��OK�� �Ƽ�ʹ��
		//sum = sum +(float)(1/i);����д�ǲ��Ե�
		//��һ��д��:sum=sum+1/(float)(i); ���Ƽ�
	}
	printf("sum = %f\n", sum);//float������%f���
	return 0;
}
/*
	������Ϊ��
	---------------------
	sum = 5.187378
	---------------------
*/