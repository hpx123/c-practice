#include<stdio.h>
#include<string.h>
#define MAX 0x77777

int main(){
	char s[100];
	int i, m, a[26] = {0}, max = -MAX, j, k, n = 4;
	while(n--){
		fflush(stdin);
		gets(s);
		for(i = 0; i < strlen(s); i++){
			m = s[i] - 'A';
			a[m]++;
		}
	}
    for(i = 0; i < 26; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	k = max;
	for(i = 0; i < max; i++){
		for(j = 0; j < 26; j++){
			if(a[j] >= k){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
		--k;
	}
	for(i = 0; i < 26; i++){
		printf("%c ",i + 'A');
	}
	return 0;
}
