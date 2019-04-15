#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int n, i;
	int a[1000];
	scanf("%d",&n);
	srand(time(NULL));
	for(i = 0; i < n; i++){	
		a[i] = rand()%1000+1;
		printf("%d ",a[i]);
	}
	printf("\n");
	qsort(a,n,sizeof(a[0]),cmp);
	for(i = 0; i < n; i++){
		printf("%d ",a[i]);
		while(a[i] == a[i + 1]){
			i++;
		}
	}
	return 0;
}
