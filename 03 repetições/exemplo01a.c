#include <stdio.h>

int main() {

	//ler vários inteiros e somá-los
	//até que o inteiro lido seja 0
	//ex.: usuário digita 3 2 8 1 0
	//saída: 14
	int n;
	int soma = 0;

	do {
		scanf("%d", &n); //sobrescreverá qualquer valor inicial para n
		soma += n; //soma = soma + n
		if(n == 0) {
			break; //sai da estrutura de repetição
		}
	} while(1);

	printf("soma = %d\n", soma);

	return 0;

}
