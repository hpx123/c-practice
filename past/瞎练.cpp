#include<stdio.h>
#include<stdlib.h>
struct student{
    int num;
    char name;
    struct student *next;
};
int n;
struct student *creat(){
    struct student *head=NULL;
    struct student *p1,*p2;
    p2=p1=(struct student*)malloc(sizeof(struct student));
    if(p1=NULL)
        return NULL;
    n=0;
    printf("请输入学生号和学生姓名：");
    scanf("%d %s",&p1->num,p1->name);
    while(p1->num>0){
        n++;
        if(n==1){
            head=p1;
            p2->next=NULL;
        }
        else{
            p2->next=p1;
            p2=p1;
        }
        p1=(struct student*)malloc(sizeof(struct student));
        printf("请输入学生号和学生姓名：");
        scanf("%d %s",&p1->num,p1->name);
    }
    p2->next=NULL;
    free(p1);
    p1=NULL;
    return head;
}
void print(struct student *head){
    struct student *ptemp;
    ptemp=head;
    if(head!=NULL){
        printf("%d",ptemp->num);
        printf("%s",ptemp->name);
        ptemp=ptemp->next;
    }
}
int main(){
    struct student *p;
    p=creat();
    print(p);
    return 0;
}
