#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ì³²¨ÄÇÇÐÊýÁÐ
int Fib(int n)//µÝ¹é
{
	if (n <=2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int Fib2(int n)//·ÇµÝ¹é
{
	int a = 1;
	int b = 1;
	int c = 1;
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
	scanf("%d", &n);
	int ret=Fib(n);
	int ret2=Fib2(n);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return 0;
}