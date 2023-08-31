#include <stdio.h>

int main() {

	//escreve os números pares e impares de 0 a 99
	//i = 0, j = 1
	//i = 2, j = 3
	//i = 4, j = 5
	//i = ...
	//i = 98, j = 99
	for(int i = 0, j = 1; i < 100; i+=2, j+=2) {
		printf("%d %d\n", i, j);
	}

	return 0;

}
