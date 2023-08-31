#include <stdio.h>

int main() {

	//ler vários inteiros e somá-los
	//até que o inteiro lido seja 0
	//ex.: usuário digita 3 2 8 1 0
	//saída: 14
	int n = 1;
	int soma = 0;

	while(n != 0) { //essa expressão, exige que coloquemos um
					//valor inicial para n diferente de 0
		scanf("%d", &n);
		soma += n; //soma = soma + n
	}

	printf("soma = %d\n", soma);

	return 0;

}
