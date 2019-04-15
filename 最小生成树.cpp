#include<stdio.h>
#define MAX 12345

int road[105][105] = {0};
int node;
int sum = 0;
int lowcost[105];

int  prime(int k){
	int i, j, t, min = 0;
	for(i = 0; i < node; i++){
		lowcost[i] = road[k][i];
	}
	for(i = 1; i < node; i++){
		min = 0x7fffffff;
		for(j = 0; j < node; j++){
			if(lowcost[j] < min && lowcost[j] != 0){
				min = lowcost[j];
				k = j;
			}
		}
		sum += min;
		lowcost[k] = 0;
		for(j = 0; j < node; j++){
			if(road[k][j] != 0 && road[k][j] < lowcost[j]){
				lowcost[j] = road[k][j];
			}
		}
	}
	return sum;
}

int main(){
	scanf("%d",&node);
	
	int i, j;
	
	for(i = 0; i < node; i++){
		
		for(j = 0; j < node; j++){
			
			scanf("%d",&road[i][j]);
			
		}
	}
	printf("%d",prime(0));
	return 0;
}
