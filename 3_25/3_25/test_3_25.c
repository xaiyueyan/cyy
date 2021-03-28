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
//	printf("%d\n", sizeof(s = a + 1));//s的类型
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
//前置++和--
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	int y = --a;
//	printf("%d\n", x);//结果是11
//	printf("%d\n", y);//结果是10
//
//
//	return 0;
//}
//后置++和--
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
//	i = a++ && ++b && d++;// 若前面为真，后面不计算
//	//i = a++ || ++b || d++;//若前面为真，后面不计算
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d );
//	return 0; 
//}

//访问一个结构的成员
//. 结构体.成员名
//->结构体指针->成员名

//结构体
//struct Book
//{
//	char name[20];
//	int price;
//};
// void print1(struct Book* pb)//传址调用
//{
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//}
//
//void print2(struct Book b)//传值调用
//{
//	printf("%s\n", b.name);
//	printf("%d\n", b.price);
//}
//
//int main()
//{
//	struct Book b1 = { "c语言设计", 30 };
//	struct Book b2 = { "数据结构", 99 };
//	printf("%s\n", b2.name);
//	printf("%d\n", b2.price);
//	print1(&b2);
//	print2(b2);
//	return 0;
//}


