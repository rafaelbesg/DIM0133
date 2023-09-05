#include <stdio.h>

int main() {

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if(a == b+c || b == a+c || c == a+b) {
		printf("Um dos números é a soma dos outros dois\n");
	} else {
		printf("Nenhum dos números é a soma dos outros dois\n"); 
	}


	return 0;

}
