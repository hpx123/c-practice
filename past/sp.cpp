#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int num;
	struct node *next;
}student;

student *create(int n){
	student *head=(student *)malloc(sizeof(student));
	student *p1,*p2;
	head->next=NULL;
	p1=head;
	while(n){
		p2=(student *)malloc(sizeof(student));
		printf("请输入学生信息：");
		scanf("%d",&p2->num);
		if(p2->num==0){
			free(p2);
			break;
		} 
		p1->next=p2;
		p1=p1->next;
		p1->next=NULL;
		n--;
	}
	return head;
}

void print(student *head){
	student *q;
	q=head->next;
	while(q!=NULL){
		printf("%d\n",q->num);
		q=q->next;
	}
}

student *charu(student *head,int m){
	student *p,*pNew;
	p=head->next;
	while(p&&p->num!=m)
		p=p->next;
	pNew=(student *)malloc(sizeof(student));
	scanf("%d",&pNew->num);
	pNew->next=p->next;
	p->next=pNew;
	return head;
}

int main(){
	int n,m;
	scanf("%d",&n);
	student *p;
	p=create(n);
	print(p);
	scanf("%d",&m);
	p=charu(p,m);
	print(p);
	return 0;
} 
