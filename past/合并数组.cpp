#include<stdio.h>
 
#define MAX 20
 
 void Mergea(int a1[], int len1, int a2[], int len2, int a3[], int len3)
{

	int  i1 = 0, i2 = 0, i3 = 0;//����������ʼλ�ö�Ϊ0 
	while (i1 < len1&&i2 < len2)
	{
		if (a1[i1] < a2[i2])
		{
			a3[i3++] = a1[i1++];
		}
		else
		{
			a3[i3++] = a2[i2++];
		}
	}
	while (i1 < len1)
	{
		a3[i3++] = a1[i1++];
	}
	while (i2 < len2) 
	{
		
		a3[i3++] = a2[i2++];
	}
	return;
}
 
 
int main()
{
	int a1[] = { 1,3,5,7,9,10 };
	int a2[] = { 2,4,6,8,10 };
	int len1 = sizeof(a1) / sizeof(int);//���ÿ�������Ԫ�ظ��� 
	int len2 = sizeof(a2) / sizeof(int);
	int a3[MAX];
	Mergea(a1, len1, a2, len2, a3, MAX);//������û�з��ز�����ԭ������Ϊ���鱾���Ǹ���ַ��
//���Ի�ֱ�Ӷ�array3���в��� 
	for (int i = 0; i < len1 + len2; i++)
	{
		printf("%d ", a3[i]);
	}
 
}

