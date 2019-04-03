#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int num;
	char name[20];
	struct node *next;
}student;
student *create(int n){
	student *head=(student *)malloc(sizeof(student));
	head->next=NULL;
	student *p1,*p2;
	p1=head;
	while(n){
		p2=(student *)malloc(sizeof(student));
		printf("请输入学生信息：");
		scanf("%d %s",&p2->num,p2->name);
		p1->next=p2;
		p1=p1->next;
		p1->next=NULL;
		n--;
	}
    free(p2);
	return head;
}
void print(student *head){
	student *q;
	q=head->next;
	while(q!=NULL){
		printf("%d %s\n",q->num,q->name);
		q=q->next;
	}
}

int main(){
	int n,m;
	scanf("%d",&n);
	student *p,*a;
	p=create(n);
	print(p);
	scanf("%d",&m);
	a=shanchu(p,m);
	print(a);
	return 0;
} 
