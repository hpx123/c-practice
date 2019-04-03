// C�汾.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int g_id = 0;
//ѧ����Ϣ�ṹ��
struct data{
	size_t	id;			
	char	name[20];		//����
	char	className[20];	//�γ���
	double	score;			//�ɼ�
};

//����������
struct node{
	struct data	 Data;	//��
	struct node* pNext;	//������������
};


//���������ָ��
struct node* pHead = NULL;

//����������ĺ���
struct node*  CreateNode(struct data* d){
	struct node* pNew = (struct node*)malloc(sizeof(struct node));
	strcpy(pNew->Data.className,  d->className);
	strcpy(pNew->Data.name, d->name);
	pNew->Data.id = d->id;
	pNew->Data.score = d->score;

	pNew->pNext = NULL;
	return pNew;
}


//����������ӽ��  ����һ��ѧ��
void addNode(struct data* d){
	//1 �������
	struct node* pNew = CreateNode(d);
	//pTempָ���һ�����
	struct node* pTemp = pHead;
	//2 �ж��½���Ϊ��һ�����ǵ�N��
	if (NULL == pHead){
		pHead = pNew;
	}
	else{
		//3 �ҵ����һ�����
		/*
		while (1){
			if (pTemp->pNext == NULL) break;//nextָ��Ϊ�գ��˳�ѭ��
			pTemp = pTemp->pNext;//����Ų
		}
		*/
		while (pTemp->pNext) pTemp = pTemp->pNext;
		//4 �½���Ϊ���һ�����ĺ�һ�����
		pTemp->pNext = pNew;
	}
}



void show(){
	system("cls");//����
	printf("########ǿ���������-ѧ������ϵͳ########\n");
	printf("1 --- ���ѧ����Ϣ\n");
	printf("2 --- ����ѧ����Ϣ\n");
	printf("3 --- �鿴������Ϣ\n");
	printf("4 --- ɾ��ѧ����Ϣ\n");
	printf("5 --- ����\n");
}

void getData(){
	struct data d;
	printf("������ѧ������:");
	scanf("%s", d.name);
	printf("������ѧ���ɼ�:");
	scanf("%lf", &(d.score));//
	printf("������ѧ���γ���:");
	scanf("%s", d.className);
	d.id = ++g_id;				//idΨһ

	addNode(&d);
}

//ÿ�γ���һ���о�Ҫ���ô˺���
void init(){
	struct data d;
	//���ļ�
	FILE* fp = fopen("newer.dat", "r");
	if (NULL == fp) return;//���ļ�ʧ�ܣ�������
	int r;
	//���ļ��е����ݴ�������
	while (1){
		r = fread(&d, 1, sizeof(d), fp);//���ļ��ж�ȡ���ݵ��ṹ��d����
		if (r <= 0) break;//���û������ѭ������
		addNode(&d);//д������
	}
	fclose(fp);
}
//��Ҫ�����ʱ������������ݱ��浽�ļ���
void save(){
	//���ļ�//����ļ�
	FILE* fp = fopen("newer.dat", "w");
	//������������д���ļ�

	struct node* temp = pHead;
	while (temp){
		fwrite(&(temp->Data),1,sizeof(struct data),fp);
		//����Ų
		temp = temp->pNext;
	}
	
	fclose(fp);
}


void travel(){
	//������������
	struct node* temp = pHead;
	printf("id\t����\t�γ���\t�ɼ�\n");
	while (temp){
		//��ӡ
		printf("%04d\t%s\t%s\t%.1lf\n", temp->Data.id,
			temp->Data.name, temp->Data.className, temp->Data.score);
		//����Ų
		temp = temp->pNext;
	}
	Sleep(3000);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	init();
	while (1){
		show();
		//Sleep(2000);
		printf("��ѡ��");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			getData();//������Ϣ
			break;
		case 3:
			//�鿴����ѧ����Ϣ
			travel();
			break;
		case 5:
			save();
			break;
		default:
			break;
		}


	}





	while (1);
	return 0;
}

