#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*int a = 0;
//	printf("考研\n");
//	printf("要不要好好学习?(0/1)>:\n");
//	scanf("%d",&a);
//	if (a == 1)
//		printf("好大学\n");
//	else
//		printf("卖红薯\n");*/
//
//	/*int a = 1;
//	printf("加入bite\n");
//	while (a <= 20000)
//	{
//		printf("敲一行代码:%d\n",a);
//		a++;
//	}
//	if(a>20000)
//
//	printf("好offer\n");*/
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
	//计算数组总大小
	sz = sizeof(arr) / sizeof(arr[0]);
	//个数=数组总大小/每个元素的大小
	printf("sz=%d\n", sz);

	return 0;
}
