#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) { //cada iteração é uma nova linha
		for(int j = i; j <= i+n-1; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;

}
