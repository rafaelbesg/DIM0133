#include <stdio.h>

int main() {

	int n, b;

	scanf("%d %d", &n, &b);

	while(n%b == 0) {
		n /= b;
	}

	if(n == 1) {
		printf("sim\n");
	} else {
		printf("não\n");
	}

	return 0;

}
