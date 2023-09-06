#include <stdio.h>

void f(int *x) {
	(*x)--;
}

void g(int x) {
	x--;
}

int main(int argc, char **argv) {

	int k = 3;

	printf("k = %d\n", k);
	g(k); //não decrementa k
	f(&k); //efetivamente decrementa k
	printf("k = %d\n", k);

	return 0;

}
