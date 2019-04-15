#include<stdio.h>

int main(){
	int road[105][105];
	int f[105] = {0};
	int i, j, k, min, n, t;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d",&road[i][j]);
		}
	}
	int sum = 0;
	f[0] = 1;
	for(t = 1; t < n; t++){
		min = 0x7fffffff;
		for(i = 0; i < n; i++){
			if(f[i] == 1){
				for(j = 0; j < n; j++){
					if(f[j] == 0 && road[i][j] < min &&road[i][j] != 0){
						min = road[i][j];
						k = j;
					}
				}
			}
		}
		if(min != 0x7fffffff){
			f[k] = 1;
			sum += min;
		}
	}
	printf("%d",sum);
	return 0;
}
