#include <stdio.h>

//descrição do problema:
//há m fotos
//em cada foto aparecem n pessoas (numeradas de 1 a n)
//duas pessoas podem estar intrigadas se elas não aparecerem lado a lado em alguma foto
//quantos pares de pessoas podem estar intrigadas?

int main() {

	int fotos[50][52];

	int n, m;

	scanf("%d %d", &n, &m);

	//para cada foto i
	for(int i = 0; i < m; i++) {
		//para cada j-ésima pessoa na foto i
		for(int j = 0; j < n; j++) {
			scanf("%d", &fotos[i][j]);
		}
	}

	int contBrigados = 0;
	//para cada par (p, q) de pessoas, tal que q > p
	for(int p = 1; p <= n; p++) {
		for(int q = p+1; q <= n; q++) {
			//percorrer a matriz em busca de uma foto
			//em que aparece p e q lado a lado
			int encontrouNaFoto = 0;
			for(int i = 0; i < m; i++) {
				for(int j = 0; j < n; j++) {
					//verifica se p está em (i, j) e q está em (i, j-1)
					if(j - 1 >= 0 && fotos[i][j] == p && fotos[i][j-1] == q)
						encontrouNaFoto = 1;
					//verifica se p está em (i, j) e q está em (i, j+1)
					if(j + 1 < n && fotos[i][j] == p && fotos[i][j+1] == q)
						encontrouNaFoto = 1;
				}
			}
			if(!encontrouNaFoto) {
				contBrigados++;
			}
		}
	}
	printf("%d\n", contBrigados);

	return 0;

}
