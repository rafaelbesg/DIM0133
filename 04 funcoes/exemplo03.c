#include <stdio.h>

void escreverIntervalo(int a, int b);

int main() {

	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		escreverIntervalo(i, i+n-1);
	}

	return 0;
}

void escreverIntervalo(int a, int b) {
	for(int i = a; i <= b; i++) {
		printf("%d ", i);
	}
	printf("\n");
}

