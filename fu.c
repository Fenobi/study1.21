#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int y = 1000;
//	//�ж�y�Ƿ�Ϊ����
//	//1.�ܱ�4���������ܱ�100����������
//	//2.�ܱ�400����������
//	for (; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

////�Ż�
//int main()
//{
//	int y = 1000;
//	int �ϼ� = 0;
//	for (; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			�ϼ�++;
//		}
//	}
//	printf("\n�ϼ�=%d\n", �ϼ�);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//��ӡ100-200֮�������
//	//����������1�����������⣬���ܱ��κ�������������
//	for (a=100; a <= 200; a++)
//	{
//		int i = 0;
//		for(i=2;i<a;i++)
//		{
//			if (a % i == 0)
//			{
//				break;;
//			}
//		}
//		if (a == i)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

////�Ż�
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b <=sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			printf("%d ", a);
//			sum++;
//		}
//	}
//	printf("\nsum=%d\n", sum);
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("���Խ���60s�ڹػ������롰������������ֹ�ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������")==0)//�����ַ���֮��Ƚϲ����á�==��
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

