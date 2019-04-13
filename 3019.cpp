#include<stdio.h>
#include<string.h>

int main(){
	char s[105];
	int kill = 0, i, t = 0;
	scanf("%s",s);
	for(i = 0; i < strlen(s); i++){
		if(s[i] == 'K'){
			t++;
			if(t > kill){
				kill = t;
			}
		}
		else{
			t = 0;
		}
	}
	if(kill >= 10){
		printf("You are Beyond Godlike (Somebody kill him!)");
	}
	else if(kill == 9){
		printf("You are Godlike");
	}
	else if(kill == 8){
		printf("You have a M-m-m-m....Monster Kill ");
	}
	else if(kill == 7){
		printf("You are Wicked Sick");
	}
	else if(kill == 6){
		printf("You are Unstoppable");
	}
	else if(kill == 5){
		printf("You have a Mega-Kill");
	}
	else if(kill == 4){
		printf("You are Dominating");
	}
	else if(kill == 3){
		printf("You are on a Killing Spree ");
	}
	else{
		printf("You are a Foolish Man");
	}
	return 0;
}
