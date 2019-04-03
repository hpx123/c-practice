// C版本.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int g_id = 0;
//学生信息结构体
struct data{
	size_t	id;			
	char	name[20];		//名字
	char	className[20];	//课程名
	double	score;			//成绩
};

//链表结点类型
struct node{
	struct data	 Data;	//车
	struct node* pNext;	//车后面绑的绳子
};


//代表链表的指针
struct node* pHead = NULL;

//创建链表结点的函数
struct node*  CreateNode(struct data* d){
	struct node* pNew = (struct node*)malloc(sizeof(struct node));
	strcpy(pNew->Data.className,  d->className);
	strcpy(pNew->Data.name, d->name);
	pNew->Data.id = d->id;
	pNew->Data.score = d->score;

	pNew->pNext = NULL;
	return pNew;
}


//往链表中添加结点  增加一个学生
void addNode(struct data* d){
	//1 创建结点
	struct node* pNew = CreateNode(d);
	//pTemp指向第一个结点
	struct node* pTemp = pHead;
	//2 判断新结点成为第一个还是第N个
	if (NULL == pHead){
		pHead = pNew;
	}
	else{
		//3 找到最后一个结点
		/*
		while (1){
			if (pTemp->pNext == NULL) break;//next指针为空，退出循环
			pTemp = pTemp->pNext;//往后挪
		}
		*/
		while (pTemp->pNext) pTemp = pTemp->pNext;
		//4 新结点成为最后一个结点的后一个结点
		pTemp->pNext = pNew;
	}
}



void show(){
	system("cls");//清屏
	printf("########强哥粗制滥造-学生管理系统########\n");
	printf("1 --- 添加学生信息\n");
	printf("2 --- 查找学生信息\n");
	printf("3 --- 查看所有信息\n");
	printf("4 --- 删除学生信息\n");
	printf("5 --- 保存\n");
}

void getData(){
	struct data d;
	printf("请输入学生名字:");
	scanf("%s", d.name);
	printf("请输入学生成绩:");
	scanf("%lf", &(d.score));//
	printf("请输入学生课程名:");
	scanf("%s", d.className);
	d.id = ++g_id;				//id唯一

	addNode(&d);
}

//每次程序一运行就要调用此函数
void init(){
	struct data d;
	//打开文件
	FILE* fp = fopen("newer.dat", "r");
	if (NULL == fp) return;//打开文件失败，不读了
	int r;
	//把文件中的内容存入链表
	while (1){
		r = fread(&d, 1, sizeof(d), fp);//从文件中读取数据到结构体d里面
		if (r <= 0) break;//如果没读到，循环结束
		addNode(&d);//写入链表
	}
	fclose(fp);
}
//需要保存的时候把链表中数据保存到文件中
void save(){
	//打开文件//清空文件
	FILE* fp = fopen("newer.dat", "w");
	//把链表中数据写入文件

	struct node* temp = pHead;
	while (temp){
		fwrite(&(temp->Data),1,sizeof(struct data),fp);
		//往后挪
		temp = temp->pNext;
	}
	
	fclose(fp);
}


void travel(){
	//遍历整个链表
	struct node* temp = pHead;
	printf("id\t姓名\t课程名\t成绩\n");
	while (temp){
		//打印
		printf("%04d\t%s\t%s\t%.1lf\n", temp->Data.id,
			temp->Data.name, temp->Data.className, temp->Data.score);
		//往后挪
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
		printf("请选择：");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			getData();//增加信息
			break;
		case 3:
			//查看所有学生信息
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

