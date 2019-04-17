#include<stdio.h>
#include<stdlib.h> 
#define MAX 0x77777

int min(int a,int b){
	return a < b ? a : b;
}

int main(){
	int road[58][58]; 
	int b[25] = {0};
	int i, j, m, w, x, y, k, t;
	char s[1005];
	for(i = 1; i <= 58; i++){
		for(j = 1; j <= 58; j++){
			road[i][j] = MAX;
		}
	}
	scanf("%d",&m);
	while(m--){
		fflush(stdin);
		gets(s);
        x = s[0] - 64; 
        y = s[2] - 64;
        if(x >= 1 && x < 26) b[x] = 1;  
        if(y >= 1 && y < 26) b[y] = 1;  
        road[x][y] = min(road[x][y], atoi(&s[3]));
		road[y][x] = min(road[y][x], atoi(&s[3]));
	}

	for(k = 1; k <= 58; k++){
		for(i = 1; i <= 58; i++){
			for(j = 1; j <= 58; j++){
				if(i != j && road[i][j] > road[k][j] + road[i][k]){
					road[i][j] = road[k][j] + road[i][k];
				}
			}
		}
	}
	int min = MAX;
	for(i = 1; i <= 58; i++){
		if(road[26][i] < min && b[i] == 1){
			min = road[26][i];
			t = i;
		}
	}

	printf("%c %d",t + 64 , min);
	return 0;
}
