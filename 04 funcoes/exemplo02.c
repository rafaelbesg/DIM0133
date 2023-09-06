#include <stdio.h>

int maiorDeDois(int a, int b) {
	if(a > b) {
		return a;
	} else {
		return b;
	}
}

int main() {

	int x, y;
	x = 5;
	y = 2;
	printf("Maior entre %d e %d = %d\n", x, y, maiorDeDois(x, y));

	return 0;

}
