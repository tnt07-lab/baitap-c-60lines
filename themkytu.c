#include <stdio.h>
#include <string.h>

int main() {
	char kytu[10] = "ABCDEF";
	int i;
	
	int len = strlen(kytu);
	for(i = 3;i < len;i++) {
		kytu[i] = kytu[i + 1];
	}
	
	printf("Ket qua: %s\n", kytu);
	
	for(i = len - 1;i >= 0;i--) {
		printf("%c", kytu[i]);
	}
	
	strcat(kytu, "123");
	printf("\nThem chuoi ky tu: %s", kytu);
	
	return 0;
}
