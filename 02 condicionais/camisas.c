#include <stdio.h>

int main() {

	//declaração de variáveis para armazenar a quantidade de cada um
	//dos tamanhos de camisa
	int qtdCamisasP = 3;
	int qtdCamisasM = 0;
	int qtdCamisasG = 1;
	//declaração da variável com o tamanho da camisa que o usuário
	//vai digitar
	char tamCamisa;

	printf("Digite o tamanho da camisa: ");
	scanf("%c", &tamCamisa);

	//escreve o tamanho da camisa e se há disponbilidade em estoque
	if(tamCamisa == 'P') {
		printf("Tamanho pequeno\n");
		if(qtdCamisasP > 0)
			printf("Está disponível\n");
		else
			printf("Não está disponível\n");
	} else {
		if(tamCamisa == 'M') {
			printf("Tamanho médio\n");
			if(qtdCamisasM > 0)
				printf("Está disponível\n");
			else
				printf("Não está disponível\n");
		} else {
			printf("Tamanho grande\n");
			if(qtdCamisasG > 0)
				printf("Está disponível\n");
			else
				printf("Não está disponível\n");
		}
	}

	return 0;

}
