#include <stdio.h>

//ordenação de vetor por bucket sort

int main() {

	int v[100];
	int n; //qtd de elementos no vetor
	int freq[4] = {0}; //maior elemento é 3, então o tamanho do vetor é 4

	scanf("%d", &n);

	//para a ordenação funcionar, os números lidos devem estar entre 0 e 3
	for(int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	//v[] = {1, 3, 2, 1, 2, 1}
	//freq[0] = 0
	//freq[1] = 3
	//freq[2] = 2
	//freq[3] = 1
	
	for(int i = 0; i < n; i++) {
		freq[v[i]]++;
	}

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < freq[i]; j++) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;

}
