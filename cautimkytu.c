#include <stdio.h>
#include <string.h>

int main() {
	char chuoi[100];
	int demc = 0;
	int demcach = 0;
	int i;
	
	printf("Nhap chuoi: ");
	fgets(chuoi, sizeof(chuoi), stdin);
	chuoi[strcspn(chuoi, "\n")] = '\0';
	
	int len = strlen(chuoi);
	for(i = 0;i < len;i++) {
		if(chuoi[i] == ' ') {
			demcach++;
		}
		
	}
	printf("So lan xuat hien dau cach: %d\n", demcach);
	
	for(i = 0;i < len;i++) {
		if(chuoi[i] == 'c') {
			demc++;
		}
		
	}
	printf("So lan xuat hien c: %d\n", demc);
	
	printf("Chuoi ky tu dao nguoc: ");
	for(i = len - 1;i >= 0;i--) {
		printf("%c", chuoi[i]);
	}
	
	return 0;
}
