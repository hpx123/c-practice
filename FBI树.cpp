#include<stdio.h>
#include<string.h>

char c[21];

void judge(int l, int r){
	int i, s = 0;
	for(i = l; i <= r; i++){
		if(c[i] == '1'){
			s++;
		}
	}
	if(s == (r - l + 1)){
		printf("I");
	}
	else if(s == 0){
		printf("B");
	}
	else{
		printf("F");
	}
}

void tree(int l, int r){
	int mid;
	if(r - l > 0){
		mid = (r + l) / 2;
		tree(l, mid);
		tree(mid + 1, r);
	}
	judge(l, r);
}

int main(){
	int n, i;
	scanf("%d",&n);
	scanf("%s",c);
	tree(0, 2 * n + 1);
	return 0;
} 
