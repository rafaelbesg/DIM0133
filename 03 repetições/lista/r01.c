#include <stdio.h>

int main() {

	int n, x;

	scanf("%d %d", &x, &n);

	for(int i = 0; i < n; i++) {
		if(i == 0) {
			printf("%d", x);
		} else {
			printf(", %d", x);
		}
	}


	return 0;

}
