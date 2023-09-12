#include <stdio.h>
//stdlib.h contém a função abs
#include <stdlib.h>

//retorna a soma dos divisores próprios de n
int somaDivisoresProprios(int n) {
	int soma = 0;
	for(int i = 1; i < n; i++) {
		if(n%i == 0) {
			soma += i;
		}
	}
	return soma;
}

//retorna se a e b são colegas, segundo a definição da questão
//nota: abs retorna o módulo (absoluto) do número passado como argumento
int saoNumerosColegas(int a, int b) {
	return abs(somaDivisoresProprios(a)-b) <= 2 && abs(somaDivisoresProprios(b)-a) <= 2;
}

int main() {

	int a, b;

	scanf("%d %d", &a, &b);

	if(saoNumerosColegas(a, b)) {
		printf("S\n");
	} else {
		printf("N\n");
	}

	return 0;

}
