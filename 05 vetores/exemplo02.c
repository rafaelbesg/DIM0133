#include <stdio.h>

int main() {

	int v[10];
	int n;
	int x;
	//quantidade de ocorrencias do x
	int qtd = 0; 

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
