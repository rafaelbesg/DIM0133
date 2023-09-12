#include <stdio.h>

//escreve na tela h horas, m minutos e s segundos, no formato hh:mm:ss
//se os segundos ultrapassarem 59, os segundos excedentes são transferidos para os minutos
//se os minutos ultrapassarem 59, os minutos excedentes são transferidos para as horas
//se as horas ultrapassarem 23, os dias excedentes são descontados para ficar entre 0 e 23h
void escreverHorario(int h, int m, int s) {
	if(s >= 60) {
		m += s/60;
		s %= 60;
	}
	if(m >= 60) {
		h += m/60;
		m %= 60;
	}
	if(h >= 24) {
		h %= 24;
	}
	printf("%02d:%02d:%02d\n", h, m, s);
}

int main() {

	int h, m, s;

	scanf("%d %d %d", &h, &m, &s);

	//escreve os horários de cada uma das 4 rondas seguintes
	escreverHorario(h+1, m, s);
	escreverHorario(h+2, m+10, s+30);
	escreverHorario(h+4, m+40, s+50);
	escreverHorario(h+12, m+5, s+5);

	return 0;

}
