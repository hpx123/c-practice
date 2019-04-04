#include<stdio.h>
#include<string.h>

typedef struct {
	char name[16];
	int money;
	int  get;
	int sub;
}Gift;


int main(){
	int n, i, j, k, t;
	char s[1005];
	char a[1005];
	Gift stu[1005];
	int num;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%s",stu[i].name);
		stu[i].get=0;
	}
	for(i = 0;i < n; i++){
		scanf("%s",a);
		for(k = 0; k < n; k++){
			if( strcmp(a , stu[k].name)==0){
				scanf("%d %d",&stu[k].money,&num);
				for(j = 0; j < num; j++){
					scanf("%s",s);
					for(t = 0; t < n; t++){
						if( strcmp(s , stu[t].name)==0){
							stu[t].get + = stu[k].money/num;
						}	
					}
				}
				stu[k].get + = ( money % num ) * num;
			}
		}
	}
	for(i = 0; i < n; i++){
		stu[i].sub = stu[i].get - stu[i].money;
		printf("%s %d\n",stu[i].name,stu[i].sub);
	}
	return 0;	
}                                                               
