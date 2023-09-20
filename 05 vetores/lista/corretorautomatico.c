
#include <stdio.h>

int main() {

	int n;

	//vetor que armazena as respostas corretas (gabarito)
	int gabarito[20];

	//vetor que armazena as respostas do aluno
	int respostas[20];

	//número de acertos, inicialmente zero
	int acertos = 0;

	scanf("%d", &n);

	//leitura do gabarito
	for(int i = 0; i < n; i++) {
		scanf("%d", &gabarito[i]);
	}

	//leitura das respostas
	for(int i = 0; i < n; i++) {
		scanf("%d", &respostas[i]);
	}

	//para cada i entre 0 e n-1
	for(int i = 0; i < n; i++) {
		//se respostas[i] for igual a gabarito[i], incrementa-se acertos
		if(respostas[i] == gabarito[i]) {
			acertos++;
		}
	}

	//escreve o número de acertos
	printf("%d ", acertos);
	//verifica se precisa do plural
	if(acertos == 1)
		printf("acerto\n");
	else
		printf("acertos\n");

	return 0;
}

