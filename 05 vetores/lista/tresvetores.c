#include <stdio.h>

//uma vez que precisa escrever os elementos do vetor em um formato específico
//por 3 vezes, uma vez para cada vetor, resolvi criar essa função
//o primeiro parâmetro v é o vetor a ser escrito
//o segunda parâmetro letraVetor é a letra que representa o vetor
//o terceiro parâmetro é a quantidade de inteiros utilizados
void escreverVetor(int v[15], char letraVetor, int n) {
	printf("%c = [", letraVetor);
	for(int i = 0; i < n; i++) {
		if(i != 0)
			printf(", ");
		printf("%d", v[i]);
	}
	printf("]\n");
}

int main() {

	int a[15], b[15], c[15], d[15];

	//armazena qual o próximo índice a armazenar um número
	//em cada um dos vetores, b, c e d
	int proximoIndice_b = 0;
	int proximoIndice_c = 0;
	int proximoIndice_d = 0;

	for(int i = 0; i < 15; i++) {
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < 15; i++) {
		//se for múltiplo de 2, armazena a[i] em b (no índice proximoIndice_b)
		//incrementa proximoIndice_b (o incremento é feito após a atribuição)
		if(a[i]%2 == 0)
			b[proximoIndice_b++] = a[i];
		//o mesmo raciocínio para os outros dois casos
		if(a[i]%3 == 0)
			c[proximoIndice_c++] = a[i];
		if(a[i]%2 != 0 && a[i]%3 != 0)
			d[proximoIndice_d++] = a[i];
	}

	escreverVetor(b, 'B', proximoIndice_b);
	escreverVetor(c, 'C', proximoIndice_c);
	escreverVetor(d, 'D', proximoIndice_d);


	return 0;

}
