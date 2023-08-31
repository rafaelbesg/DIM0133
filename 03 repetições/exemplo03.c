#include <stdio.h>

int main() {

	//escreve n números por linha, sempre incrementando em 1
	//até atingir x
	
	//por exemplo, para n = 6 e x = 15
	//1 2 3 4 5 6
	//7 8 9 10 11 12
	//13 14 15
	
	int n, x, cont = 1;

	scanf("%d %d", &n, &x);
	for(int i = 0; ; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", cont);
			if(cont == x) {
				break; //sai do for j
			}
			cont++; //cont = cont + 1
		}
		printf("\n");
		if(cont == x)
			break; //sai do for i
	}


	return 0;

}
