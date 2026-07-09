#include <stdio.h>
#include <string.h>

int nhapMang(char ten[][100], float giaTri[], int *n) {
	printf("Nhap so luong linh kien: ");
	scanf("%d", n);
	if(*n <= 0) {
		printf("So khong doc nhap nho hon 0.");
		return 0;
	}
	
	getchar();
	int i;
	for(i = 0;i < *n;i++) {
		printf("Nhap ten linh kien %d: ", i + 1);
		fgets(ten[i], 100, stdin);
		ten[i][strcspn(ten[i], "\n")] = '\0';
		
		
		
		printf("Nhap gia tri tro khang (Ohm) cho linh kien %d: ", i + 1);
		scanf("%f", &giaTri[i]);
		
		getchar();
		
	}
	return 1;
}

void inRa(char ten[][100],float giaTri[] , int n) {
	printf("%-25s %s", "Ten linh kien", "Tro khang(Ohm)");
	printf("\n----------------------------------\n");
	int i;
	for(i = 0;i < n;i++) {
		printf("%-25s %.2f\n", ten[i], giaTri[i]);
	}
}

int main() {
	int n;
	char ten[10][100];
	float giaTri[100];
	
	if(nhapMang(ten,giaTri , &n) == 0) {
		return 0;
	}
	
	printf("Danh sach linh kien: \n");
	inRa(ten,giaTri , n);
	
	return 0;
	
}
