#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof arr);
//
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}
//int main()
//{
//	short s = 1;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 1));//s������
//	printf("%d\n", sizeof(s));
//	printf("%d\n", s);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 10 };
//	char ch[10] = { 10 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//ǰ��++��--
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	int y = --a;
//	printf("%d\n", x);//�����11
//	printf("%d\n", y);//�����10
//
//
//	return 0;
//}
//����++��--
//int main()
//{
//	int a = 10;
//	int x = a++;
//	int y = a--;
//	printf("%d\n", x);
//	printf("%d\n", y);
//
//}
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;// ��ǰ��Ϊ�棬���治����
//	//i = a++ || ++b || d++;//��ǰ��Ϊ�棬���治����
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d );
//	return 0; 
//}

//����һ���ṹ�ĳ�Ա
//. �ṹ��.��Ա��
//->�ṹ��ָ��->��Ա��

//�ṹ��
//struct Book
//{
//	char name[20];
//	int price;
//};
// void print1(struct Book* pb)//��ַ����
//{
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//}
//
//void print2(struct Book b)//��ֵ����
//{
//	printf("%s\n", b.name);
//	printf("%d\n", b.price);
//}
//
//int main()
//{
//	struct Book b1 = { "c�������", 30 };
//	struct Book b2 = { "���ݽṹ", 99 };
//	printf("%s\n", b2.name);
//	printf("%d\n", b2.price);
//	print1(&b2);
//	print2(b2);
//	return 0;
//}


