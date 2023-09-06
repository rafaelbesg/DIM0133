#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a+b);

	return 0;

}
