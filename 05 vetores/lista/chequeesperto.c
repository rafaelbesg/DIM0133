#include <stdio.h>

int main() {

	//vetor para marcar se cada uma das ilhas foi visitada
	//inicialmente nenhuma foi visitada
	int visitado[10] = {0};

	//vetor para armazenar a sugestão dos nativos de cada uma das ilhas
	int sugestoes[10];

	//leitura das sugestões 
	for(int i = 0; i < 10; i++) {
		scanf("%d", &sugestoes[i]);
	}

	//inicialmente está na ilha 0
	int ilhaAtual = 0;

	do {
		//marca a ilha atual como visitada
		visitado[ilhaAtual] = 1;

		//a ilha atual passa a ser a sugerida pelos nativos
		ilhaAtual = sugestoes[ilhaAtual];
	} while(visitado[ilhaAtual] == 0);
	//do/while: repete isso enquanto não tiver visitado ainda a ilha atual
	
	printf("%d\n", ilhaAtual);

	return 0;
}

