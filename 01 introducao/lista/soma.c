#include <stdio.h>

int main() {

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("Resposta: %d\n", a == b+c || b == a+c || c == a+b);


	return 0;

}