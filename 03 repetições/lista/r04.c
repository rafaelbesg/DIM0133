#include <stdio.h>

int main() {

	int a, b;

	scanf("%d %d", &a, &b);

	for(int i = 1; i <= 1000; i++) {
		if(i%a == 0 && i%b == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;

}
