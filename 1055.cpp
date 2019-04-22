#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char s[15];
	int num;
}Str;

int cmp(const void *a, const void *b){
	Str *x = (Str *)a;
	Str *y = (Str *)b;
	return x -> num - y -> num;
}

int main(){
	Str color[100];
	int i, n, j;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%s", color[i].s);
		color[i].num = 1;
	}
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(color[i].num && strcmp(color[i].s, color[j].s) == 0){
				color[i].num++;
				color[j].num = 0;
			}
		}
	}
	qsort(color, n, sizeof(color[0]), cmp);
	char c[15];
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(color[i].num == color[j].num && strcmp(color[i].s, color[j].s) < 0){
				strcpy(c, color[j].s);
				strcpy(color[j].s, color[i].s);
				strcpy(color[i].s, c);
			}
		}
	}
	int count = 0;
	for(i = 0; i < n; i++){
		if(color[i].num != 0){
			count++;
		}
	}
	printf("%d\n", count);
	for(i = n - 1; i >= 0; i--){
		if(color[i].num){
			printf("%d\n", color[i].num);
			printf("%s\n", color[i].s);
			while(color[i].num == color[i - 1].num){
				--i;
				printf("%s\n", color[i].s);
			}
		}
	}
	return 0;
} 
