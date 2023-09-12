#include <stdio.h>

//dado o inteiro n, retorna se n é primo ou não
int ehPrimo(int n) {
	int qtd = 0; //quantidade de divisores
	for(int i = 1; i <= n; i++) {
		if(n%i == 0) {
			qtd++;
		}
	}
	return qtd == 2; //para ser primo a quantidade de divisores deve ser 2
}

int main() {

	int n;

	scanf("%d", &n);
	if(ehPrimo(n) && ehPrimo(n+2)) {
		printf("Numero forma par de gemeos\n");
	} else {
		printf("Numero nao forma par de gemeos\n");
	}

	return 0;

}
