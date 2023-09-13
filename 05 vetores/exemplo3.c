#include <stdio.h>

int main() {

	int v[12];
	int idx = 0; //estamos usando essa variável para indicar qual a próxima posição
	//... a ser preenchida no vetor
	//essa é uma forma de usar o vetor até certa ponto
	//com a possibilidade de remoção (nesse caso basta decrementar idx)
	//mas, claro, para uma solução mais completa, precisa de mais coisas, como verificações do limite, etc

	v[idx] = 4;
	idx++;
	v[idx] = 7;
	idx++;
	v[idx++] = 9; //podemos incrementar idx já na atribuição

	for(int i = 0; i < idx; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}
	
	return 0;

}
