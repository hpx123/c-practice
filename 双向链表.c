#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int num;
	struct node *next;
	struct node *prior;
}student;
student *create(){
	student  *head;
	head=(student *)malloc(sizeof(student));
	head->next=NULL;
	head->prior=NULL;
	student *p1,*p2;
	p1=head;
	while(1){
		p2=(student *)malloc(sizeof(student));
		printf("ÇëÊäÈëÐÅÏ¢£º");
		scanf("%d",&p2->num);
		if(p2->num==0){
			free(p2);
			break;
		}
		p1->next=p2;
		p2->prior=p1;
		p1=p1->next;
		p1->next=NULL;
	}
	return head;
}
void print(student *head){
	student *q,*t;
	q=head->next;
	while(q!=NULL){
		t=q;
		q=q->next;
	}
	while(t!=NULL){
		printf("%d\n",t->num);
		t=t->prior;
	}
	free(t);
}
int main(){
	student *p;
	p=create();
	print(p);
	return 0;
}
