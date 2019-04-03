#include<stdio.h>
#include<stdlib.h>
typedef struct Student{
	int grade;
	char name[20];
}student;
int cmp(void *a,void *b){
	student *aa=(student *)a;
    student *bb=(student *)b;
    return(aa->grade)-(bb->grade);
}
int main() 
{  
	student stus[20]={
						{34,"tom"},
						{66,"jerry"},
						{20,"bob"},
						{40,"john"},
						{90,"lisa"},
						{72,"peter"}
	};
	qsort(stus,6,sizeof(stus[0]),cmp);
	for(int i=0;i<5;i++){
		printf("%d %s\n",stus[i].grade,stus[i].name);
	}
	return 0;
}
