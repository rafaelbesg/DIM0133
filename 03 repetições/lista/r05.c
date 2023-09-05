#include <stdio.h>

int main() {

	int x;
	int soma = 0;

	scanf("%d", &x);

	for(int i = 1; i < x; i++) {
		if(x%i == 0) {
			soma += i;
		}
	}

	if(soma == x)
		printf("Perfeito\n");
	else
		printf("Não perfeito\n");

	return 0;

}
