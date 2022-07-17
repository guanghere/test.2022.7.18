#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", & a, & b, & c);
//	//if (a > b)//应该的 后面的同理
//	
//	if (a < b)
//	{
//		int s = a;
//		a = b;
//		b = s;
//	}
//	if (a < c)
//	{
//		int s = a;
//		a = c;
//		c = s;
//	}
//	if (b < c)
//	{
//		int s = b;
//		b = c;
//		c = s;
//	}
//	printf("\n%d %d %d\n", a, b, c);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1; a < 100; a++)
//	{
//		a +=2;
//		//if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//不能从最小开始求	要从两数之间的最小值 往下
//
//
//	int max = 0;
//	if (a > b)
//		max = b;
//	else
//		max = a;
//	//求出两数之间的最小值
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("%d \n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}


//辗转相除法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}


//打印1000到2000之间闰年
//	能被4整除，并且不能被100整除的是
//	或者能被400整除
//	&&并且	||或者

//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1000; a <= 2000; a++)
//
//	{
//		if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//
//	printf("\n %d ", count);
//	return 0;
//}



//		打印100到200之间的素数
//		素数——质数
//		只能被1和本身整除的数
//		


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断
//		//2到i-1之间的数去尝试除i，看能不能整除
//
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)	//例如100%2==0，
//			{
//				break;
//			}
//		}
//
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
//}



//			goto 语句

//int main()
//{
//frist:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto frist;
//
//	return 0;
//}

	//		关机程序	输入给定的值 取消关机
	//		shutdown -s -t 60
	//			   关机 时间 60秒
	//		shutdown -a 
	//		取消关机
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//	关机
//	//	C语言提供了一个	system（）函数 - 执行系统命令
//	system("shutdown -s -t 60");//存放输入的信息		 system 头文件 stdlib.h
//
//again:
//	printf("60秒钟后关机 输入123456 取消关机");
//
//	scanf("%s",input);//数组名不用取地址
//
//	if (strcmp(input, "123456") == 0)//字符串比较不能用==   要用strcmp比较
//								//stecmp 头文件 string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//	也可以用while循环来替代

//int main()
//{
//	char input[20] = { 0 };
//	//	关机
//	//	C语言提供了一个	system（）函数 - 执行系统命令
//	system("shutdown -s -t 60");//存放输入的信息		 system 头文件 stdlib.h
//
//
//	while (1)
//	{
//
//		printf("60秒钟后关机 输入123456 取消关机");
//
//		scanf("%s", input);//数组名不用取地址
//
//		if (strcmp(input, "123456") == 0)//字符串比较不能用==   要用strcmp比较
//									//stecmp 头文件 string.h
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//							goto语句只能在本函数内跳转	不能跨函数
//						只有在多层嵌套想跳出来的情况下使用