#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", & a, & b, & c);
//	//if (a > b)//Ӧ�õ� �����ͬ��
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
//	//���ܴ���С��ʼ��	Ҫ������֮�����Сֵ ����
//
//
//	int max = 0;
//	if (a > b)
//		max = b;
//	else
//		max = a;
//	//�������֮�����Сֵ
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


//շת�����

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


//��ӡ1000��2000֮������
//	�ܱ�4���������Ҳ��ܱ�100��������
//	�����ܱ�400����
//	&&����	||����

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



//		��ӡ100��200֮�������
//		������������
//		ֻ�ܱ�1�ͱ�����������
//		


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�
//		//2��i-1֮�����ȥ���Գ�i�����ܲ�������
//
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)	//����100%2==0��
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



//			goto ���

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

	//		�ػ�����	���������ֵ ȡ���ػ�
	//		shutdown -s -t 60
	//			   �ػ� ʱ�� 60��
	//		shutdown -a 
	//		ȡ���ػ�
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//	�ػ�
//	//	C�����ṩ��һ��	system�������� - ִ��ϵͳ����
//	system("shutdown -s -t 60");//����������Ϣ		 system ͷ�ļ� stdlib.h
//
//again:
//	printf("60���Ӻ�ػ� ����123456 ȡ���ػ�");
//
//	scanf("%s",input);//����������ȡ��ַ
//
//	if (strcmp(input, "123456") == 0)//�ַ����Ƚϲ�����==   Ҫ��strcmp�Ƚ�
//								//stecmp ͷ�ļ� string.h
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

//	Ҳ������whileѭ�������

//int main()
//{
//	char input[20] = { 0 };
//	//	�ػ�
//	//	C�����ṩ��һ��	system�������� - ִ��ϵͳ����
//	system("shutdown -s -t 60");//����������Ϣ		 system ͷ�ļ� stdlib.h
//
//
//	while (1)
//	{
//
//		printf("60���Ӻ�ػ� ����123456 ȡ���ػ�");
//
//		scanf("%s", input);//����������ȡ��ַ
//
//		if (strcmp(input, "123456") == 0)//�ַ����Ƚϲ�����==   Ҫ��strcmp�Ƚ�
//									//stecmp ͷ�ļ� string.h
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//							goto���ֻ���ڱ���������ת	���ܿ纯��
//						ֻ���ڶ��Ƕ�����������������ʹ��