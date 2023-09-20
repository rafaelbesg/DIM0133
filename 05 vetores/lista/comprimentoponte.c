#include <stdio.h>

int main() {

	//vetor para armazenar as alturas
	int v[30];
	int n;

	//variável para armazenar o valor da maior altura
	int maior = 0;

	//a e b representam os índices onde ocorrem a maior altura (a < b)
	int a = -1, b = -1;

	scanf("%d", &n);

	//faz a leitura e armazena em maior a maior altura de todas
	for(int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
		if(v[i] > maior) {
			maior = v[i];
		}
	}

	//um novo for para armazenar em a e b os valores de i tal que v[i] é igual a maior
	//inicializei a com -1 para indicar que nenhum valor foi atribuido
	//assim na primeira ocorrencia a é alterado
	//e na segunda ocorrencia b é alterado
	//muitos fizeram esse trecho de forma diferente, mas no geral a ideia foi a mesma
	for(int i = 0; i < n; i++) {
		if(v[i] == maior) {
			if(a == -1) {
				a = i;
			} else {
				b = i;
			}
		}
	}

	//o comprimento sera dado pela diferenca - 1
	printf("%d\n", b - a - 1);

	return 0;
}

