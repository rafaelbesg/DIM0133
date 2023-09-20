#include <stdio.h>

int main() {

	//vetor para marcar quais páginas estão presentes (1 para presente, 0 para ausente)
	int pagina[1001] = {0};
	int m, n;

	scanf("%d %d", &m, &n);
	for(int i = 0; i < n; i++) {
		int p;
		scanf("%d", &p);
		pagina[p] = 1; //marca a página lida como presente
	}

	//para cada página de 1 a m, verifica no vetor pagina se está ausente
	for(int i = 1; i <= m; i++) {
		if(pagina[i] == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}

