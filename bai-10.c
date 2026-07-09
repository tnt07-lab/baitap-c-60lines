#include <stdio.h>

float Rnt(float dientro[], int n) {
	float tong = 0.0;
	int i;
	for(i = 0;i < n;i++) {
		tong += dientro[i];
	}
	return tong;
}

int main() {
	int n, i;
	float dientro[10];
	
	do{
		printf("Nhap n(n > 10): ");
		scanf("%d", &n);
		
		if(n <= 0 || n >= 10) {
			printf("So khong thoa man.Vui long nhap lai.");
		}
	}while(n <= 0 || n >= 10);
	
	for(i = 0;i < n;i++) {
		printf("dientro[%d] =", i + 1);
		scanf("%f", &dientro[i]);
	}
	
	float kq = Rnt(dientro, n);
	printf("Dien tro noi tiep: %.2f", kq);
	
	return 0;
}
