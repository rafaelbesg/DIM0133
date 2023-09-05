#include <stdio.h>

int main() {

	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a >= b && a >= c && a >= d) {
		printf("Maior: %d\n", a);
	} else {
		if(b >= c && b >= d) {
			printf("Maior: %d\n", b);
		} else {
			if(c >= d)
				printf("Maior: %d\n", c);
			else
				printf("Maior: %d\n", d);
		}
	}

	return 0;

}
