#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
	*(double *)a > *(double *)b ? 1 : -1;
}

int main(){
	double GPA[100005], GPT, score;
	int n, k, i, j;
	scanf("%d %d",&n, &k);
	for(i = 0; i < n; i++){
		scanf("%lf %lf",&GPT, &score);
		GPA[i] = GPT * 1.0 / score;
	}
	qsort(GPA,n,sizeof(GPA[0]),cmp);
	for(i = 0; i < n ; i++){
		printf("%lf\n",GPA[i]);
	}
	printf("%0.2lf",GPA[k - 1]);
	return 0;
}
