#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int qingwa(int n)//�ݹ�
{
	if (n <=2)
	{
		return n;
	}
	else
	{
		return qingwa(n - 2) + qingwa(n - 1);
	}
}
int qingwa2(int n)//�ǵݹ�
{
	int a = 1;
	int b = 2;
	int c = a;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("����������̨������");
	scanf("%d", &n);
	int ret = qingwa(n);
	int ret2 = qingwa2(n);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return 0;
}