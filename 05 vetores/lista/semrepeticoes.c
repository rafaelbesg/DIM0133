#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	int v[n]; //como não há especificação de valor máximo para n, utilizo aqui VLA

	for(int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	//para cada i-ésimo elemento do vetor
	for(int i = 0; i < n; i++) {
		//verificar se houve alguma ocorrência anterior de v[i]
		int ocorrenciaAnterior = 0;
		for(int j = 0; j < i; j++) { //j vai de 0 a i-1 (índices anteriores a i)
			if(v[i] == v[j]) {
				ocorrenciaAnterior = 1;
			}
		}
		//se não tiver tido ocorrência, escreve na tela
		if(!ocorrenciaAnterior) {
			printf("%d ", v[i]);
		}
	}



	return 0;

}
