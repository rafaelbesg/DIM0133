#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	int maior;
	for(int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		if(i == 0 || x > maior) {
			maior = x;
		}
	}
	printf("%d\n", maior);

	return 0;

}
