#include <stdio.h>

int main() {

	int v[10];
	int n;
	int x;
	int qtd = 0; //quantidade de elementos iguais a x

	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	scanf("%d", &x);

	for(int i = 0; i < n; i++) {
		if(v[i] == x) {
			qtd++;
		}
	}
	printf("%d\n", qtd);

	return 0;

}
