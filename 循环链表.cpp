#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int num;
	struct node *next;
}person;
person *create(int n){
	person *head=(person *)malloc(sizeof(person));
	head->num=1;
	head->next=NULL;
	person *p1;
	p1=head; 
	for(int i=2;i<=n;i++){
		person *p2=(person *)malloc(sizeof(person));
		p2->num=i;
		p2->next=NULL;
		p1->next=p2;
		p1=p1->next;
	}
	p1->next=head;
	return head;
}
void print(person *head,int k,int m,int n){
	person *p,*t;
	p=head;
	while(p->num!=k){
		p=p->next;
	}
	while(n--){
		for(int i=1;i<m;i++){
			t=p;
			p=p->next;
		}
		printf("%d\n",p->num);
	    t->next=p->next;
	    p=t->next;
	}
}
int main(){
	int n,k,m;
	scanf("%d %d %d",&n,&k,&m);
	person *q;
	q=create(n);
	print(q,k,m,n);
	return 0;
}
