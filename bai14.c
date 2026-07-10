#include <stdio.h>
#include <stdlib.h>

int nhapMang(float **cuoncam, int *n) {
	printf("Nhap n: ");
	scanf("%d", n);
	if(*n < 0) {
		printf("Nhap so lon hon 0.");
		return 0;
	}
	
	getchar();
	
	*cuoncam = (float *) malloc ((*n) * sizeof(float));
	if(*cuoncam == NULL) {
		printf("Day bo nho.\n");
		return 0;
	}
	
	int i;
	for(i = 0;i < *n;i++) {
		printf("cuoncam[%d] =", i + 1);
		scanf("%f", &(*cuoncam)[i]);
	}
	
	return 1;
}

float tinhTongVaTrungBinh(float cuoncam[], int  n) {
	float tong = 0.0;
	int i;
	for(i = 0;i < n;i++) {
		tong += cuoncam[i];
		
	}
	return tong / n;
}

void inMang(float cuoncam[], int n) {
	int i;
	for(i = 0;i < n;i++) {
		printf("%.2f ", cuoncam[i]);
	}
	
}

int main() {
	int n;
	float *cuoncam = NULL;
	
	if(nhapMang(&cuoncam, &n) == 0) {
		return 0;
	}
	
	float kq = tinhTongVaTrungBinh(cuoncam, n);
	printf("Ket qua: %.2f", kq);
	
	printf("Mang vua nhap: ");
	inMang(cuoncam, n);
	
	free(cuoncam);
	return 0;
}
