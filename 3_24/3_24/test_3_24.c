#define _CRT_SECURE_NO_WARNINGS 1
//��һ�������洢���ڴ��еĶ�������1�ĸ���
#include<stdio.h>
int main()
{
	int num=-1;
	int count = 0;//����
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	printf("��������1�ĸ���=%d\n", count);
	return 0;
}