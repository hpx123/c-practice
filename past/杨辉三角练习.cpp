#include<stdio.h>
#include<string.h>

int main(){
	char a[105];
	char b[105];
	gets(a);
    int i , j , k;
    for(i = 0; i < strlen(a); i++){
		if(a[i] == ' '){
			a[i++] = '\0';
			while(a[i] == ' '){
				i++;
			}
			for(j = 0; a[i] != '\0';j++,i++){
				b[j] = a[i];
			}
			b[j] = '\0';
			break;
		} 
	}
	for(i = 0; a[i] != '\0'; i++){
		if(a[i] == b[0]){
			k=i;
			i++;
			int flag = 1;
			for(j = 1; b[j] != '\0'; j++){
				i++;
				if(a[i] != b[j]){
					flag =0;
					break;
				}
			}
			if(flag){
				printf("%d",k+1);
				break;
			}
		}
		
	}
	return 0;
} 
