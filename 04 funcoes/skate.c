#include <stdio.h>
#include <stdlib.h>

//retorna o menor entre dois inteiros
int min(int a, int b) {
	if(a < b) return a;
	return b;
}

//retorna o maior entre dois inteiros
int max(int a, int b) {
	if(a > b) return a;
	return b;
}

//dados 3 inteiros, retorna o do meio (supondo uma ordenação)
int scoreDoMeio(int a, int b, int c) {
	int soma = a + b + c;
	int menor = min(min(a, b), c);
	int maior = max(max(a, b), c);
	return soma - menor - maior;
}

//lê da entrada padrão os 3 scores de um dia e retorna o score do meio
int lerUmDia() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	return scoreDoMeio(a, b, c);
}

int main() {

	int scoreA, scoreB;

	//obtem o score do primeiro skatista
	scoreA = scoreDoMeio(lerUmDia(), lerUmDia(), lerUmDia());
	//obtem o score do segundo skatista
	scoreB = scoreDoMeio(lerUmDia(), lerUmDia(), lerUmDia());

	//verifica quem obteve maior score e escreva a respectiva saída
	if(scoreA > scoreB) {
		printf("A\n");
	} else if(scoreB > scoreA) {
		printf("B\n");
	} else
		printf("empate\n");

	return 0;

}
