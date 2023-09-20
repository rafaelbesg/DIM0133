#include <stdio.h>

int main() {

	int n, x;

	//vetor para marcar qual número já apareceu
	int marcado[10] = {0};

	//de início, consideraremos como uma permutacao
	//até que se constate o contrário
	int permutacao = 1;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		//se o valor lido estiver fora do intervalo [1, n]
		//então conclue-se que não é permutação
		if(x <= 0 || x > n) {
			permutacao = 0;
			continue;
		}
		//se o número já estiver marcado, significa que já apareceu
		//e, portanto, não é permutação
		if(marcado[x] == 1) {
			permutacao = 0;
		}
		//marca o número lido
		marcado[x] = 1;
	}

	//se for permutação, escreva sim, caso contrário, não
	if(permutacao) {
		printf("sim\n");
	} else {
		printf("não\n");
	}


	return 0;
}

