#include<stdio.h>
#define M 0x7777

int main(){
    int i, n, a[105], min = M, max = -M;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("%d %d",min, max);
    return 0;
}
