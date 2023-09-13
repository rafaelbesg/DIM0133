#include <stdio.h>

int main() {

	int vetor[5] = {1, 4, 5, 7, 9};
	vetor[1] = 3;

	for(int i = 0; i < 5; i++) {
		printf("v[%d] = %d\n", i, vetor[i]);
	}

	return 0;

}
