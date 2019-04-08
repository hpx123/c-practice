#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
	return *(int *)a - *(int *)b; 
}
int main(){
	int n, a[1005], i;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(i = 0; i < n; i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
