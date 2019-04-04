#include<stdio.h>

int leap_year(int n){
	if( (n % 4 == 0 && n % 100 !=0)||n % 400 == 0){
		return 1;
	}
	return 0;
}

int month1 [] = { 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
int day [8] = {0};  

int main(){
	int first = 6;
	day[ 6 ]++;
	int n, i, j;
	int week;
	scanf("%d",&n);
	for( i = 0; i <  n ; i++ ){
		month1[2] = 28;
		if( leap_year(1900+i) )
			month1[2]++;
		for( j = 1; j <= 12 ; j++){
			if(i==0 && j==1)
				continue;
			first=(first+month1[j-1]%7)%7; 
            if(first==0)    
				first=7;
            day[first]++;

		}
	}
	for( i = 6; i <= 7; i++){
		printf("%d ",day[ i ]);
	}
	for( i = 1; i <= 5; i++){
		printf("%d ",day[ i ]);
	}
	return 0;
}
