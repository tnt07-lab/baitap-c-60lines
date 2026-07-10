#include <stdio.h>
#include <string.h>

int main() {
	char chuoi[5][10] = {"DEV001", "DEV003", "DEV005", "DEV006", "DEV007"};
	int size = sizeof(chuoi) / sizeof(chuoi[0]);
	char canTim[] = "DEV005";
	int timThay = 0;
	
	int i;
	for(i = 0;i < size;i++) {
		if(strcmp(chuoi[i], canTim) == 0) {
			timThay = 1;
			break;
		}
	}
	
	if(timThay == 1) {
		printf("Da tim thay %s trong danh sach.", canTim);
	} else {
		printf("Khong tim thay %s trong danh sach.", canTim);
	}
	return 0;
}
