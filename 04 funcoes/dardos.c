#include <stdio.h>
#include <math.h>

//dadas as coordenadas (x0, y0) e (x1, y1), retorna a distância euclidiana entre elas
float distancia(float x0, float y0, float x1, float y1) {
	return sqrt((x0-x1)*(x0-x1) + (y0-y1)*(y0-y1));
	//nota: poderia usar pow também sqrt(pow(x0-x1, 2) + pow(y0-y1, 2))
}

//retorna a pontuação em função de uma dada distância d
//obs: se observar, a pontuação bônus é metade da pontuação principal
//	então podemos usar essa função para os dois casos
int pontuacao(float d) {
	if(d <= 1)
		return 10;
	if(d <= 2)
		return 6;
	if(d <= 3)
		return 4;
	return 0;
	//nota: como o return já encerra a função, foi possível escrever os condicionais dessa forma
}

int main() {

	//variáveis para armazenar o lançamento atual
	float x, y;
	//variáveis para armazenar o lançamento anterior
	float xa, ya;
	//pontuação total (precisa inicializar, pois acumularemos valores)
	int pontuacaoTotal = 0;

	for(int i = 0; i < 10; i++) {
		//leitura do lançamento atual
		scanf("%f %f", &x, &y);

		//cálculo da pontuação principal e bônus
		int pontuacaoPrincipal = pontuacao(distancia(x, y, 0, 0));
		int pontuacaoBonus = 0;
		if(i != 0) //a bônus só vale a partir da segunda iteração
			pontuacaoBonus = pontuacao(distancia(x, y, xa, ya))/2;

		//atualiza pontuação total
		pontuacaoTotal += pontuacaoPrincipal + pontuacaoBonus;
		
		//lançamento anterior recebe o lançamento atual
		xa = x;
		ya = y;
	}

	//escreve a pontuação total
	printf("%d\n", pontuacaoTotal);

	return 0;

}
