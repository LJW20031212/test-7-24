#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*int a = 0;
//	printf("����\n");
//	printf("Ҫ��Ҫ�ú�ѧϰ?(0/1)>:\n");
//	scanf("%d",&a);
//	if (a == 1)
//		printf("�ô�ѧ\n");
//	else
//		printf("������\n");*/
//
//	/*int a = 1;
//	printf("����bite\n");
//	while (a <= 20000)
//	{
//		printf("��һ�д���:%d\n",a);
//		a++;
//	}
//	if(a>20000)
//
//	printf("��offer\n");*/
//
//	int num1 = 100;
//	int num2 = 200;
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//	Add(num1, num2);
//	return 0;
//}

//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main ()
//{
//	int F = 0;
//	int Q = 0;
//	int num1 = 100;
//	int num2 = 200;
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//	Q=Add(num1, num2);
//	printf("%d\n", Q);
//	F = Add(2, 3);
//	printf("%d\n", F);
//	return 0;
//}
int main()
{
	//int a = 0;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	///*printf("%d\n", arr[3]);*/
	//while (a < 10)
	//{
	//	printf("%d ", arr[a]);
	//	a++;
	//}

	/*int a = 1;
	int b = 5;
	printf("%d\n", a & b);
	return 0;*/

	int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));
	//���������ܴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
	printf("sz=%d\n", sz);

	return 0;
}
