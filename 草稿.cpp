#include<stdio.h>
#define MAX 0x777

int min(int a, int b){
	return a > b ? a : b;
}

int main(){
	int road[58][58];
	int i, j, k, t, m, w, x, y;
	char a, b;
	/*for(i = 0; i < 58; i++){
		for(j = 0; j < 58; j++){
			road[i][j] = MAX;
		}
	}*/
	scanf("%d",&m);
	for(i = 0; i < m; i++){
		scanf("%c %c %d",&a, &b, &w);

		printf("%d %d",a - 'A',b - 'A');
	}
	return 0;
}
