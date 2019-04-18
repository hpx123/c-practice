#include<stdio.h>
#include<string.h>

int shuzi(char a,char b)
{
    if(a>'9' || a < '0') return 0;
    if(b>'9' || b < '0') return 0;
    if(b<=a) return 0;
    return 1;
}
int zimu(char a, char b)
{
    if(a>'z' || a < 'a') return 0;
    if(b>'z' || b < 'a') return 0;
    if(b<=a) return 0;
    return 1;
}


int main(){
	char s[105];
	int p1, p2, p3;
	int i, j, k;
	char c;
	scanf("%d %d %d",&p1, &p2, &p3);
	scanf("%s",s);
	for(i = 0; i < strlen(s); i++){
		if(s[i] == '-' && (shuzi(s[i - 1], s[i + 1]) || zimu(s[i - 1], s[i + 1]))){
			if(p1 == 3){
				for(j = s[i - 1] - '0' + 1; j < s[i + 1] - '0'; j++){
					for(k = 1; k <= p2; k++){
						printf("*");
					}
				}	
			}
			else{
				if(p3 == 2){
					for(j = (int)s[i + 1] - 1; j >= (int)s[i - 1] + 1; j--){
						if(s[i - 1] >= '0' && s[i + 1] <= '9'){
							for(k = 1; k <= p2; k++){
								printf("%c",j);
							}
						}
						else if(p1 == 1){
							for(k = 1; k <= p2; k++){
								printf("%c",j);
							}
						}
						else if(p1 == 2){
							for(k = 1; k <= p2; k++){
								printf("%c",j - 'a' + 'A');
							}
						}
					}
				}
				else{
					for(j = (int)s[i - 1] + 1; j < (int)s[i + 1]; j++){
						if(s[i - 1] >= '0' && s[i + 1] <= '9'){
							for(k = 1; k <= p2; k++){
								printf("%c",j);
							}
						}
						else if(p1 == 1){
							for(k = 1; k <= p2; k++){
								printf("%c",j);
							}
						}
						else if(p1 == 2){
							for(k = 1; k <= p2; k++){
								printf("%c",j - 'a' + 'A');
							}
						}
					}
				}
			}
			
		}
		else{
			printf("%c",s[i]);
		}
	}
	return 0;
}
