#include <stdio.h>
#include <stdlib.h>

typedef struct tStudent
{
	char szName[10];		//姓名
	int nAge;				//性别
	int nStuNum;			//学号
	int nScore;				//成绩
}Student;

typedef struct tNode
{
	Student stu;		
	struct tNode* pNext;
}Node;

Node *pHead = NULL;	

//录入学生信息
void InputStudent();
//打印学生信息
void PrintStudent();
//保存学生信息
void SaveStudent();
//读取学员信息
void ReadStudent();
//统计所有学生人数
int CountStudent();
//查找学生信息
Node* FindStudent();
//修改某个学生的信息
void ModifyStudent();
//删除学生信息
void DeleteStudent();



int main()
{
	while (1)
	{
		printf("==============欢迎使用高校学生成绩管理系统V1.0==============\n");
		printf("\t=======请选择功能列表=======\n");
		printf("\t\t1.录入学生信息\n");
		printf("\t\t2.打印学生信息\n");
		printf("\t\t3.保存学生信息\n");
		printf("\t\t4.读取学生信息\n");
		printf("\t\t5.统计所有学生人数\n");
		printf("\t\t6.查找学生信息\n");
		printf("\t\t7.修改学生信息\n");
		printf("\t\t8.删除学生信息\n");
		printf("\t\t0.退出系统\n");

		char ch;

		scanf("%c", &ch);
		
		switch (ch)
		{
		case '1'://录入学生信息
			InputStudent();
			break;
		case '2'://打印学生信息
			PrintStudent();
			break;
		case '3'://保存学生信息
			SaveStudent();
			break;
		case '4'://读取学员信息
			ReadStudent();
			break;
		case '5'://统计所有学生人数
			printf("当前学生总人数为:%d\n", CountStudent());
			break;
		case '6'://查找学生信息
		{
			Node *pNode = FindStudent();
			if (pNode != NULL)
			{
				printf("学号:%d\t姓名:%s\t年龄:%d\t成绩:%d\n", pNode->stu.nStuNum, pNode->stu.szName, pNode->stu.nAge, pNode->stu.nScore);
			}
			break;
		}
		case '7'://修改某个学生的信息
			ModifyStudent();
			break;
		case '8'://删除学生信息
			DeleteStudent();
			break;
		case '0':
			printf("欢迎再次使用！\n");
			return 0;
			break;
		default:
			printf("您的输入有误，请重新输入！\n");
			break;
		}
	
	}


	return 0;
}

//录入学生信息
void InputStudent()
{
	printf("\n请输入学生信息:姓名 学号 年龄 成绩\n");

	Node* p;
	p = pHead;
	while (pHead != NULL && p->pNext != NULL)
	{
		p = p->pNext;
	}

	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	if (pHead == NULL)
	{
		pHead = pNewNode;
		p = pHead;
	}
	else
	{
		p->pNext = pNewNode;
	}

	scanf("%s %d %d %d", pNewNode->stu.szName, &pNewNode->stu.nStuNum, &pNewNode->stu.nAge, &pNewNode->stu.nScore);

	system("cls");
	printf("\n数据添加成功....\n");

}



//打印学生信息
void PrintStudent()
{
	system("cls");
	printf("打印所有学生信息\n");

	Node* p;
	p = pHead;
	
	while (p != NULL)
	{
		printf("学号:%d\t姓名:%s\t年龄:%d\t成绩:%d\n", 
			p->stu.nStuNum, 
			p->stu.szName,
			p->stu.nAge, 
			p->stu.nScore);

		p = p->pNext;
	}
}

//保存学生信息
void SaveStudent()
{
	system("cls");

	FILE *pFile = fopen("C:\\stuinfo.data", "w");
	if (pFile == 0)
	{
		printf("打开文件失败\n");
		return;
	}

	Node *p;
	p = pHead;
	while (p != NULL)
	{
		fprintf(pFile, "%d %s %d %d\n", p->stu.nStuNum, p->stu.szName, p->stu.nAge, p->stu.nScore);

		p = p->pNext;
	}
	printf("数据保存成功\n");
	fclose(pFile);
}

//读取学员信息
void ReadStudent()
{
	system("cls");

	Node *p, *p2;
	p = p2 = pHead;

	while (p2 != NULL)
	{
		p = p->pNext;
		free(p2);
		p2 = p;
	}

	pHead = NULL;

	FILE *pFile = fopen("C:\\stuinfo.data", "r");

	if (pFile == 0)
	{
		printf("打开文件失败\n");
		return;
	}

	while (!feof(pFile))
	{
		Node *pTemp = (Node*)malloc(sizeof(Node));
		
		fscanf(pFile, "%d %s %d %d\n", &pTemp->stu.nStuNum, &pTemp->stu.szName, &pTemp->stu.nAge, &pTemp->stu.nScore);

	
		if (pHead == NULL)
		{
			pHead = pTemp;
			p = pHead;
		}
		else
		{
			p->pNext = pTemp;
			p = p->pNext;
			p->pNext = NULL;
		}		
	}

	fclose(pFile);
}

//统计所有学生人数
int CountStudent()
{
	system("cls");
	int nCount = 0;

	ReadStudent();

	Node *p;
	p = pHead;

	while (p != NULL)
	{
		nCount++;
		p = p->pNext;
	}

	return nCount;
}

//查找学生信息
Node* FindStudent()
{
	system("cls");
	int nStuNum;
	printf("请输入要查找的学生的学号:\n");

	scanf("%d", &nStuNum);

	ReadStudent();
	Node* p;
	p = pHead;
	while (p != NULL)
	{
		if (p->stu.nStuNum == nStuNum)
		{
			return p;
		}

		p = p->pNext;
	}

	if (p == NULL)
	{
		printf("没有该学生的信息\n");
		return NULL;
	}

	return NULL;
}

//修改某个学生的信息
void ModifyStudent()
{
	system("cls");
	int nStuNum;
	printf("请输入要修改学生信息的学号:\n");
	scanf("%d", &nStuNum);

	ReadStudent();

	Node* p;
	p = pHead;

	while (p != NULL)
	{
		if (p->stu.nStuNum == nStuNum)
		{
			printf("请输入要修改的信息：姓名 学号 年龄 成绩\n");
			scanf("%s %d %d %d", p->stu.szName, &p->stu.nStuNum, &p->stu.nAge, &p->stu.nScore);
			printf("修改成功!\n");
			break;
		}

		p = p->pNext;
	}

	if (p == NULL)
	{
		printf("没有该学生信息!\n");
	}
}

//删除学生信息
void DeleteStudent()
{
	system("cls");
	int nStuNum;
	printf("请输入要删除学生信息的学号:\n");

	scanf("%d", &nStuNum);

	ReadStudent();

	Node *p, *p2;

	p = pHead;
	
	if (pHead->stu.nStuNum == nStuNum)
	{
		p2 = pHead;
		pHead = pHead->pNext;
		free(p2);
		return;
	}

	while (p->pNext != NULL)
	{
		if (p->pNext->stu.nStuNum == nStuNum)
		{
			p2 = p->pNext;
			p->pNext = p->pNext->pNext;
			free(p2);
			return;
		}

		p = p->pNext;
		if (p->pNext == NULL)
		{
			break;
		}
	}

	if (p->pNext == NULL)
	{
		printf("没有该学生信息\n");
	}
}
