#include<stdio.h>
#include<string.h>

void change(char *s){
	char *p;
	p = s;
	while(*p != '\0'){
		if(*p >= 65 && *p <= 90){
			*p += 32;
		}
		p++;
	}
}

int main(){
	char b[1000001];
	char a[11];
	int i, j, k, n = 0, count = 0, first;
	gets(a);
	gets(b);
	change(a);
	change(b);
	strcat(a," ");
	strcat(b," ");
    for(i = 0; i < strlen(b); i++){
    	if(b[i] == ' '){
    		int flag = 1;
    		for(k = n, j = 0; k <= i, j < strlen(a); k++, j++){
    			if(b[k] != a[j]){
    				flag = -1;
				}
			}
			if(flag == 1){
				count++;
			}
			if(flag == 1 && count == 1){
				first = n;
			}
			n = i + 1;
		}
		
	}
	if(count){
	    printf("%d %d",count, first);
	}
	else{
	    printf("-1");
	}
	return 0;
} 
