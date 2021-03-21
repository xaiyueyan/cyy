#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[] = { 'a', 'b', 'c' };
	char arr2[]= "abc";
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);//计算数组大小
	int i = 0;
	char* p = arr1;
	for (i = 0; i < sz1; i++)
	{
		printf("&arr1[%d]=%p  <===>  %p\n", i, &arr1[i],p+i);//查看数组地址
	}
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	printf("%d\n", sz1);
	printf("%d\n", sz2);
	return 0;
}