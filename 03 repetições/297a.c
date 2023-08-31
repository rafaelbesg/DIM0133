#include <stdio.h>

//resolve o problema do duplo clique disponível em:
//https://atcoder.jp/contests/abc297/tasks/abc297_a

int main() {

	int n; //qtd de cliques
	int d; //distancia entre um clique e outro
		   //para ser considerado duplo clique

	int a, b; //dois últimos cliques

	scanf("%d %d", &n, &d);

	int primeiroDuploClique = -1;

	for(int i = 0; i < n; i++) {
		a = b;
		scanf("%d", &b);
		if(i > 0) { //só a partir de i = 1 teremos dois cliques válidos em a b
			if(b - a <= d) {
				if(primeiroDuploClique == -1) {
					primeiroDuploClique = b;
				}
			}
		}
	}
	printf("%d\n", primeiroDuploClique);

	return 0;

}
