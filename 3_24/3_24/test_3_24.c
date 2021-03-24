#define _CRT_SECURE_NO_WARNINGS 1
//求一个整数存储在内存中的二进制中1的个数
#include<stdio.h>
int main()
{
	int num=-1;
	int count = 0;//计数
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	printf("二进制中1的个数=%d\n", count);
	return 0;
}