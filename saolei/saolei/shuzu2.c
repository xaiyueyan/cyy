#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int arr1[10];
//	//int arr2[3][4];
//	//int arr3[5][12];
//	int arr[][4] = { { 1, 2 }, {3, 4}, {5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d]=%p\n ",i,j,&arr[i][j]);//��ӡ��ά�����ַ
//		}
//		//printf("\n");
//	}
//	return 0;
//}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ���������
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)//�ж��ǲ��Ǹ����������Ƿ����ź����
			break;
	}
}
int main()
//ð������
{
	//0 1 2 3 4 5 6 7 8 9 
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	//��������
	//���鴫�ݲ������������һ��Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}