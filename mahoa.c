#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	int i;
	
	printf("Nhap chuoi can ma hoa: ");
	scanf("%s", s);
	
	int len = strlen(s);
	for(i = 0;i < len;i++) {
		s[i] = s[i] + 1;
	}
	printf("Ma hoa: %s", s);
	
	for(i = 0;i < len;i++) {
		s[i] = s[i] - 1;
	}
	printf("Giai ma: %s", s);
	
	return 0;
}
