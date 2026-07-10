#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[100];
	int i;
	
	printf("Nhap chuoi(ky tu > 5):");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = '\0';
	
	int len = strlen(s);
	
	if(len < 5) {
		printf("Nhap ky tu do dai lon hon 5.");
		return 0;
	}
	
		s[0] = toupper(s[0]);
		s[len - 1] = toupper(s[len - 1]);
	
	printf("In hoa chu cai dau va cuoi: %s", s);
	
	printf("Xoa 2 ky dau cua chuoi: %s", s + 2);
	
	return 0;
}
