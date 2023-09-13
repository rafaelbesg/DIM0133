#include <stdio.h>

int main() {

	int numOcorrencias[10];
	int n;

	//inicialização do vetor
	for(int i = 0; i < 10; i++) {
		numOcorrencias[i] = 0;
	}

	printf("Digite 20 números entre 0 e 9: ");
	for(int i = 0; i < 20; i++) {
		scanf("%d", &n);
		numOcorrencias[n]++;
	}

	for(int i = 0; i < 10; i++) {
		printf("%d ocorreu %d vezes\n", i, numOcorrencias[i]);
	}


	return 0;

}
