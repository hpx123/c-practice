#include <cstdio>
#include <cstring>
char str[20][256];
int main() {
	int N;
	scanf("%d\n", &N);
	int minStr, minLen = 256;
	for(int i=0; i<N; i++) {	// ����N���ַ���
		gets(str[i]);	// ����һ��
		if(strlen(str[i]) < minLen){	// �õĸ��̵��ַ��� 
			minLen  = strlen(str[i]);
			minStr = i;
		} 
	}
	char dest[256], ans[256];
	int max = 0;
	for(int i=0; i<minLen; i++) {	// �Ӵ��Ŀ�ʼλ�� 
		for(int j = 0; j<minLen -i; j++) {	// �Ӵ��ĳ��� 
			strncpy(dest, str[minStr]+i, j);	// ��ȡ�Ӵ�
			dest[j] = '\0';			// ��ȫĩβ��'\0' 
			bool ok = true;
			for(int k=0; k<N; k++) {	// ���N���ַ����Ƿ񶼰����Ӵ�dest
				if(strstr(str[k], dest) == NULL) {	// ��k����������dest�Ӵ� 
					ok = false;
					break; 
				}
			}	
			if(ok && strlen(dest)>max) {	// ���ָ������Ӵ� 
				max = strlen(dest);
				strcpy(ans, dest);
			}
		}
	}
	for(int i=0; i<strlen(ans); i++) {	// ȥ���ո� 
		if(ans[i] != ' ') {
			printf("%c", ans[i]);
		}
	}
	return 0;
}
