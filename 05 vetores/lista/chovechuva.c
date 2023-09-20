#include <stdio.h>

int main() {

	int n, x;
	int dias[20];
	int maior = 0;

	scanf("%d", &n);

	//faz a leitura da quantidade de dias de chuvas para cada mês
	//e para cada valor lido, verifica se supera o valor em maior
	//caso supere, atualize maior com o valor lido
	for(int i = 0; i < n; i++) {
		scanf("%d", &dias[i]);
		if(dias[i] > maior) {
			maior = dias[i];
		}
	}

	//de posse da maior quantidade de dias de chuva
	//percorremos o vetor e para cada mês que iguale essa maior quantidade
	//escrevemos na tela o número do respectivo mês
	for(int i = 0; i < n; i++) {
		if(dias[i] == maior) {
			printf("%d ", i+1);
		}
	}

	//por fim, escreve a quantidade de dias de chuva
	printf("%d\n", maior);

	return 0;
}

