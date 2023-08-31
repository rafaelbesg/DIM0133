#include <stdio.h>

int main() {

	int n;

	//le n e em seguida n numeros
	//escrever na tela a maior subsequencia contigua de zeros
	//por exemplo
	//10
	//3 0 0 5 0 0 0 8 0 1
	//possui 3 subsequencias contiguas de zeros
	//a maior delas tem 3 zeros, portanto a resposta é 3
	scanf("%d", &n);

	int cont = 0; //contagem da subsequencia atual
	int maiorCont = 0; //maior contagem atingida
	for(int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		if(x == 0) {
			cont++;
			if(cont > maiorCont) { //se a contagem atual superar maiorCont
				maiorCont = cont; //atualizamos maiorCont
			}
		} else //se encontrar um valor diferente de zero, começa uma nova contagem
			cont = 0;
	}
	printf("%d\n", maiorCont);


	return 0;

}
