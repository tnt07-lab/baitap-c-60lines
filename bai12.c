#include <stdio.h>

float tongnl(float congsuat[], int thoigian[], int n) {
	float tong = 0.0;
	int i;
	for(i = 0;i < n;i++) {
		tong += congsuat[i] * thoigian[i];
	}
	return tong;
}

int main() {
	int n, i;
	float congsuat[10];
	int thoigian[10];
	
	do{
		printf("Nhap n(n < 10): ");
		scanf("%d", &n);
		
		if(n <= 0 || n >= 10) {
			printf("So khong thoa man.Vui long nhap lai.");
		}
	}while(n <= 0 || n >= 10);
	
	for(i = 0;i < n;i++) {
		printf("congsuat[%d] =", i + 1);
		scanf("%f", &congsuat[i]);
		
		printf("thoigian[%d] =", i + 1);
		scanf("%d", &thoigian[i]);
	}
	
	float kq = tongnl(congsuat, thoigian, n);
	printf("Tong nang luong: %.2f", kq);
	
	return 0;
}
