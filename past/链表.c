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
		p1->next=p2;
		p1=p1->next;
		p1->next=NULL;
		n--;
	}
	return head;
}
student *linlist(student *head){
	student *t,*y=NULL,*w;
	t=head->next;
	while(t!=NULL){
		w=t;
        y=t->next;
		while(y!=NULL){
			if(t->num==y->num){
				w->next=y->next;
				y=w->next;
				continue;
			}
			w=w->next;
			y=y->next;
		}
		t=t->next;
	}
	free(y);
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
int main(){
	int n;
	scanf("%d",&n);
	student *p,*s;
	p=create(n);
	s=linlist(p);
	print(s);
	return 0;
} 
