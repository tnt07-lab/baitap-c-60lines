#include <stdio.h>
#include <string.h>

int main() {
	char data[] = "TEMP:20.6,HUM:76.3\n";
	float nhietdo = 0.0;
	float doam = 0.0;
	
	int result = sscanf(data, "TEMP:%f,HUM:%f", &nhietdo, &doam);
	
	printf("Nhiet do: %.2f *C\n", nhietdo);
	printf("Do am: %.2f %%", doam);
	
	return 0;
}
