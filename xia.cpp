#include <cstdio>
#include <cstring>
char str[20][256];
int main() {
	int N;
	scanf("%d\n", &N);
	int minStr, minLen = 256;
	for(int i=0; i<N; i++) {	// 输入N个字符串
		gets(str[i]);	// 接收一行
		if(strlen(str[i]) < minLen){	// 得的更短的字符串 
			minLen  = strlen(str[i]);
			minStr = i;
		} 
	}
	char dest[256], ans[256];
	int max = 0;
	for(int i=0; i<minLen; i++) {	// 子串的开始位置 
		for(int j = 0; j<minLen -i; j++) {	// 子串的长度 
			strncpy(dest, str[minStr]+i, j);	// 获取子串
			dest[j] = '\0';			// 补全末尾的'\0' 
			bool ok = true;
			for(int k=0; k<N; k++) {	// 检查N个字符串是否都包含子串dest
				if(strstr(str[k], dest) == NULL) {	// 第k个串不包含dest子串 
					ok = false;
					break; 
				}
			}	
			if(ok && strlen(dest)>max) {	// 发现更长的子串 
				max = strlen(dest);
				strcpy(ans, dest);
			}
		}
	}
	for(int i=0; i<strlen(ans); i++) {	// 去掉空格 
		if(ans[i] != ' ') {
			printf("%c", ans[i]);
		}
	}
	return 0;
}
