#include <stdio.h>

float tongtro(float r, float c, float l) {
	float tong = 0.0;
	
	tong = (1.0/r) + (1.0/l) + (1.0/c);
	
	return 1.0 / tong;
}

int main() {
	float r, c, l;
	char chon;
	
	
	
	do {
		printf("Nhap r, l, c: ");
		scanf("%f %f %f", &r, &l, &c);
		
		float kq = tongtro(r, c, l);
		printf("Tong tro khang: %.2f", kq);
		
		printf("Ban co muon tiep tuc(Y/N): ");
		scanf(" %c", &chon);
	}while(chon == 'Y' || chon == 'y');
	
	return 0;
}
