#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
	return *(int *)a - *(int *)b;
}

int main(){
	int num[1005];
	int n, i;
	double sum = 0, t;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&num[i]);
		sum += num[i];
	}
	sum = sum / n;
	t = sum - (int)sum;
	if(t > 0.5){
		sum = sum + 1;
	}
	qsort(num, n, sizeof(num[0]), cmp);
	printf("%d\n",num[n - 1]);
	printf("%d\n", num[0]);
	printf("%d",(int)sum);
	return 0;
}
