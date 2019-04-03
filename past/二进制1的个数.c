#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s[1005];
char a[27]={'z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'};

int main(){
    int T,i;
    scanf("%d",&T);
    while(T--){
        int cont =0;
        scanf("%s",s);
        for(i=0;i<strlen(s);i++){
            if(s[i]>=97&&s[i]<=122){
                cont++;
            }
        }
        printf("%c",a[cont]);
    }
    return 0;
}
